from flask import Flask, jsonify, request
from alunos_api import alunos_app, alunos_db
from professores_api import professores_app, professores_db

app = Flask(__name__)
app.register_blueprint(alunos_app)
app.register_bluepring(professores_app)
