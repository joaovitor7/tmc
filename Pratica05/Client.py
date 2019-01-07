import os, errno
try:
    os.makedirs('templates')
except OSError as e:
    if e.errno != errno.EEXIST:
        raise

def createWebClientHtml(task):


    entradas = task['entradas']

    def createInputs(x):

        x = x.strip()
        x = '''
            <div class="checkbox">
                <label><input type="checkbox" name = "%s">%s</label>
            </div>''' % (x, x)
        return x

    inputs = list(map(createInputs, entradas))
    lines = ('\n').join(inputs)

    html = open('templates/main.html', 'w+')

    html.write(
        '''<!DOCTYPE html>
        <html lang="en">
        <head>
            <meta charset="UTF-8">
            <meta name="viewport" content="width=device-width, initial-scale=1">
            <link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.7/css/bootstrap.min.css">
            <script src="https://ajax.googleapis.com/ajax/libs/jquery/3.1.1/jquery.min.js"></script>
            <script src="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.7/js/bootstrap.min.js"></script>
            <title>'''+ task ['name'] +'''</title>
        </head>
        
        <body>
            <div class="container">
                <h1>'''+ task['name']+'''</h1>
               
        
        
            <div class="row">
                <div class="col-xs-5">
                    <form action = "/resposta" method = "POST"
                          enctype = "multipart/form-data">
                        <div class="form-group">
                            <label for="exampleInputFile">Insira as entradas dos automatos</label>'''+ lines +''' <small id="fileHelp" class="form-text text-muted">Os inputs devem conter somente 0 e 1.</small>
                        </div>
        
                        <input class="btn btn-success" type = "submit"/>
                    </form>
            <div>
              <h1>Resultado</h1>



                        {% for r in resposta %}

                            <p>{{ r }}</p>

                        {% endfor %}
            
            </div>       
        
                </div>
            </div>
            </div>
        </body>
        </html>''')

    html.close()


def createWebClientFlask(task):

    entradas = task['entradas']

    saidas = task['saidas']

    flaskPy = open('mainWeb.py', 'w+')


    def lineEntrada(entrada):
        entrada = entrada.strip()
        x = '''%s = (request.form.get("%s") == 'on')*1''' % (entrada, entrada)
        return x
    def lineUrl(entrada):
        entrada = entrada.strip()
        x = entrada + '=%s'
        return x
    lines = list(map(lineEntrada, entradas))

    linesUrl = list(map(lineUrl, entradas))

    linesUrl = ('&'.join(linesUrl)) + "'"

    lines = '\n\t\t'.join(lines)

    entradas = "% ("+(','.join(entradas))+")"

    linesUrl = '''url = 'http://127.0.0.1:8082/?''' + linesUrl + entradas

    flaskPy.write('''
from flask import Flask, render_template, request, url_for, redirect
import json
import requests
app = Flask(__name__)

@app.route('/')
def index():
    return render_template("main.html",resposta = [])

@app.route("/resposta", methods=["POST"])\ndef resposta():\n\tif (request.method == "POST"):\n\t\t%s\n\t\t%s\n\t\tr = requests.get(url)\n\t\tresposta = json.dumps(r.text)\n\t\tstringResposta = r.text[1:-1]\n\t\tlistaResposta = stringResposta.split(',')\n\t\tdef lineToHtml(line):\n\t\t\tline = line\n\t\t\treturn  line\n\t\tresposta = list(map(lineToHtml,listaResposta))\n\t\treturn render_template('main.html', resposta=resposta)
if __name__ == '__main__':
   app.run(debug = True)
    ''' % (lines, linesUrl))

