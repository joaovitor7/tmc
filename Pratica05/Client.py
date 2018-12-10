import os, errno
try:
    os.makedirs('templates')
except OSError as e:
    if e.errno != errno.EEXIST:
        raise

def createWebClientHtml(task):


    entradas = task['entradas']

    def createInputs(x):
        x = '''
            <div class="checkbox">
                <label><input type="checkbox" id = "%s"value="">%s</label>
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
        x = '''%s = request.form.get("%s")''' % (entrada, entrada)
        return x

    lines = list(map(lineEntrada, entradas))

    lines = '\n'.join(lines)

    flaskPy.write( '''
    from flask import render_template, request, url_for, redirect
    import json
    import requests
    
    
    @app.route('/')
    def index():
        return render_template("main.html")
    
    @app.route("/resposta", methods=["POST"])
    def resposta():
        if (request.method == "POST"):
            %s
    ''' % lines)


