# -*- coding:utf-8 -*-
from domain.services.ClienteService import ClienteService

class Aplicacao:
    def menu(self):
        print('1 - Cadastrar cliente')
        print('2 - sair')
        opcao = int(input('Digite a opção:'))
        return opcao

    def executar(self, opcao):
        if (opcao == 1):
            self.cadastrar_cliente()

    def cadastrar_cliente(self):
        cpf = input('CPF:')
        nome = input('Nome: ')
        print('Olá %s \n' % (nome))
        cliserv = ClienteService(cpf, nome)


