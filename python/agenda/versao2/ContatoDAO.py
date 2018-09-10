class ContatoDAO:
    def __init__(self):
        self.contatos = []


    def buscar(nome):
        resultado = []
        for contato in contatos:
            if nome == contato.nome:
                resultado.append(contato)
        return resultado

    def inserir(contato):
        contatos.add(contato)


    def existe(contato):
        return contatos.__contains__(contato)

