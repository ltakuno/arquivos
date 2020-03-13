# pattern Data Access Object
class ContatoDAO:
    def __init__(self):
        self.contatos = []
        print ("Comecando!!")

    def buscar(self, nome):
        resultado = []
        for contato in self.contatos:
            if nome == contato.nome:
                resultado.append(contato)
        return resultado

    def inserir(self, contato):
        self.contatos.append(contato)

    def existe(self, contato):
        return self.contatos.__contains__(contato)

