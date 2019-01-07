
from flask import Flask, render_template, request, url_for, redirect
import json
import requests
app = Flask(__name__)

@app.route('/')
def index():
    return render_template("main.html", resposta = []))

@app.route("/resposta", methods=["POST"])
def resposta():
	if (request.method == "POST"):
		up1 = (request.form.get("up1") == 'on')*1
		down1 = (request.form.get("down1") == 'on')*1
		up2 = (request.form.get("up2") == 'on')*1
		down2 = (request.form.get("down2") == 'on')*1
		s = (request.form.get("s") == 'on')*1
		e = (request.form.get("e") == 'on')*1
		finish = (request.form.get("finish") == 'on')*1
		start = (request.form.get("start") == 'on')*1
		cold = (request.form.get("cold") == 'on')*1
		temp_ok = (request.form.get("temp_ok") == 'on')*1
		eco = (request.form.get("eco") == 'on')*1
		confort = (request.form.get("confort") == 'on')*1
		on_lamp = (request.form.get("on_lamp") == 'on')*1
		on_tv = (request.form.get("on_tv") == 'on')*1
		precense = (request.form.get("precense") == 'on')*1
		push_door = (request.form.get("push_door") == 'on')*1
		push_window = (request.form.get("push_window") == 'on')*1
		url = 'http:// localhost:8082/?up1=%s&down1=%s&up2=%s&down2=%s&s=%s&e=%s&finish=%s&start=%s&cold=%s&temp_ok=%s&eco=%s&confort=%s&on_lamp=%s&on_tv=%s&precense=%s&push_door=%s&push_window=%s'% (up1, down1, up2, down2, s, e, finish, start, cold, temp_ok, eco, confort,on_lamp,on_tv,precense,push_door,push_window)
		r = requests.get(url)
		resposta = json.dumps(r.text)
		stringResposta = r.text[1:-1]
		listaResposta = stringResposta.split(',')
		def lineToHtml(line):
			line = line
			return  line
		resposta = list(map(lineToHtml,listaResposta))
		return render_template('/', resposta)
if __name__ == '__main__':
   app.run(debug = True)
    