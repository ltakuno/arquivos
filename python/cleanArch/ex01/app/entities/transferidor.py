from datetime import datetime
from conta import Conta

class Transferidor:
    def __init__(self, de_conta, para_conta, valor):
        self.de_conta = de_conta
        self.para_conta = para_conta
        self.valor = valor
        self.data_transacao = datetime.now()



