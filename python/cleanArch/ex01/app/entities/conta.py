from datetime import datetime

class Conta:
    def __init__(self, nome, saldo):
        self.nome = nome
        self.saldo = saldo

    def validar(self):
        pass

    def tem_saldo_suficiente(self, valor):
        return self.saldo >= valor

    def debitar(self, valor):
        if self.tem_saldo_suficiente(valor):
            self.saldo -= valor

    def creditar(self, valor):
        self.saldo += valor

