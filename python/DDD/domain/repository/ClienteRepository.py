from domain.entities.Cliente import Cliente
from .Repositorio import Repositorio
from .ClienteValidador import ClienteValidador


class ClienteRepositorio:
    def __init__(self, validador=None):
        self.clientes = {}
        self.prox_id = 1
        self.validador =  validador


    def salvar(self, cliente):
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
    Repositorio.registrar('Cliente', ClienteRepositorio(validador=ClienteValidador()))
    