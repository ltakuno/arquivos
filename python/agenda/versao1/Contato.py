class Contato:
    def __init__(self,nome, telefone):
        self.__nome = nome
        self.__telefone = telefone

    @property
    def nome(self):
        return self.__nome

    @nome.setter
    def nome(self, nome):
        self.__nome = nome

    @property
    def telefone(self):
        return self.__telefone

    @telefone.setter
    def telefone(self, telefone):
        self.__telefone = telefone

    def __str__(self):
        return "Contato [%r, %r]" % (self.__nome, self.__telefone)

    def __eq__(self,outro):
        if outro is None:
            return False
        elif self is outro:
            return True
        elif self.__nome != outro.__nome:
            return False
        elif self.__telefone != outro.__telefone:
            return False
        return True