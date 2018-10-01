# -*- coding:utf-8 -*-
from domain.entities.Cliente import Cliente
from domain.repository.ClienteRepository import *

class ClienteService:
    def __init__(self, cpf, nome):
        Repositorio.registrar('Cliente', ClienteRepositorio(validador=ClienteValidador))
        self.cliente_repositorio = Repositorio.get('Cliente')
        self.cliente = Cliente(cpf, nome)
    
 
