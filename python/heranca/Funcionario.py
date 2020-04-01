class Funcionario:
    def __init__(self, nome, cpf, salario):
        self._nome = nome
        self._cpf = cpf
        self._salario = salario

    def get_bonificacao(self):
        return self._salario * 0.10

class Gerente(Funcionario):
    def __init__(self, nome, cpf, salario, senha, qtd_gerenciados):
        super().__init__ (nome, cpf, salario)
        self._senha = senha
        self._qtd_gerenciados = qtd_gerenciados

    @property
    def nome(self):
        return self._nome    

    def autentica(self, senha):
        if self._senha == senha:
            print("acesso permitido")
            return True
        else:
            print("acesso negado")              
            return False

    def get_bonificacao(self):
        return self._salario * 0.15

gerente = Gerente('Ze da Silva', '111.111.111-11', 2000, 1234, 10)

print(gerente.nome)
print(gerente.get_bonificacao())