from flask import Flask, request
app = Flask(__name__)

@app.route("/")
def hello():
    return "Hello World!"

@app.route("/new/", methods=['POST'])
def new_todo():
    titulo = request.form['titulo']
    texto = request.form['texto']

    return "{titulo: %s, texto: %s}" % (titulo, texto)

if __name__ == "__main__":
    app.run()

