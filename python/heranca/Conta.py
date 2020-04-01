class Conta:
    __total_contas = 0
    def __init__(self, saldo):
        self.saldo = saldo
        Conta.__total_contas += 1


c1 = Conta(100)
print(c1.__total_contas)

c2 = Conta(100)
print(Conta.__total_contas)
