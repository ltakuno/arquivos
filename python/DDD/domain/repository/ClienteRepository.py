from domain.entities.Cliente import Cliente


class ValidationError(Exception):
    pass

class Repositorio(object):
    repositorios = {}

    @classmethod
    def registrar(cls, type_, repositorio):
        cls.repositorios[type_] = repositorio

    @classmethod
    def get(cls, tipo_):
        return cls.repositorios[tipo_]

    @classmethod
    def todos(cls):
        return cls.repositorios

class ClienteValidador:
    def validar(self, cliente):
        if not(cliente.cpf):
            raise ValidationError

class ClienteRepositorio:
    def __init__(self, validador=None):
        self.clientes = {}
        self.prox_id = 1
        self.validador =  validador


    def gravar(self, cliente):
        self.validador.validar(cliente)
        cliente.id = self.prox_id
        self.clientes[self.prox_id] = cliente
        self.prox_id += 1
        return cliente

    def todos(self):
        self.clientes
    
    def obter(self, id):
        return self.clientes[id]

    def remover(self, id):
        return self.clientes.pop(id)


if __name__ == '__main__':
    Repositorio.registrar('Cliente', ClienteRepositorio(validador=ClienteValidador))
    