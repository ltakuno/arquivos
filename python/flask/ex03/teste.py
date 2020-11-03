from flask import Flask, jsonify, request, render_template

app = Flask(__name__)


@app.route('/')
def index_template():
    return render_template('index.html', hello="Olá mundo!")

if __name__ == "__main__":
    app.run(port = 8080, debug = True)
