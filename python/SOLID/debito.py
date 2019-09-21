class Debito:
    def debitar(self, valor, tipo):
        if (tipo == 'poupanca'):
            print('Debitar poupanca')
        elif (tipo == 'conta corrente'):
            print('Debitar conta corrente')


conta = Debito()
conta.debitar(100, 'poupanca')
