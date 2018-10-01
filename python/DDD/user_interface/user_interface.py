# -*- coding:utf-8 -*-
from domain.services.ClienteService import *
from domain.entities.Cliente import Cliente

class Aplicacao:
    def __init__(self):
        self.servico = ClienteService()
    def menu(self):
        print('1 - Cadastrar cliente')
        print('2 - Listar clientes')
        print('3 - sair')
        opcao = int(input('Digite a opção:'))
        return opcao

    def executar(self, opcao):
        if (opcao == 1):
            self.cadastrar_cliente()
        if (opcao == 2):
            self.listar_clientes()
        if (opcao == 3):
            print('Encerrando o programa')

    def cadastrar_cliente(self):
        cpf = input('CPF:')
        nome = input('Nome: ')
        self.servico.registrarClientecom(cpf, nome)


    def listar_clientes(self):
        clientes = self.servico.obterListaClientes()

        print("------   Lista de Clientes  ------")
        for cliente in clientes:
            print('CPF: %s ' % cliente.cpf)
            print('Nome: %s \n' % cliente.nome)
