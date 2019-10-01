import requests

class Funcionario:
    aumento_anual = 1.05 # 5% de aumento

    def __init__(self, nome, sobrenome, salario):
        self.nome = nome
        self.sobrenome = sobrenome
        self.salario = salario


    @property
    def email(self):
        return '{}.{}@email.com'.format(self.nome, self.sobrenome)

    @property
    def nome_completo(self):
        return '{} {}'.format(self.nome, self.sobrenome)


    def aplicar_aumento(self):
        self.salario = self.salario * self.aumento_anual


    def escala_mensal(self, mes):
        response = requests.get(f'http://empresa.com.br/{self.sobrenome}/{mes}')
        if response.ok:
            return response.text
        else:
            return 'Bad response!'
