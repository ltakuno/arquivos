from flask import Flask, jsonify, request, render_template

app = Flask(__name__)

@app.route('/get_teste', methods=['GET'])
def get_teste():
    login = request.args.get('login', 'usuario')
    senha = request.args.get('pass', 'senha')
    return render_template('form_teste.html', usuario=login, senha=senha)



@app.route('/')
def index_template():
    return render_template('index.html', hello="Olá mundo!")

if __name__ == "__main__":
    app.run(port = 8080, debug = True)
