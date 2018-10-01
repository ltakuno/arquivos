# -*- coding:utf-8 -*-
from domain.services.ClienteService import *

class Aplicacao:
    def menu(self):
        print('1 - Cadastrar cliente')
        print('2 - sair')
        opcao = int(input('Digite a opção:'))
        return opcao

    def executar(self, opcao):
        if (opcao == 1):
            self.cadastrar_cliente()
        if (opcao == 2):
            print('Encerrando o programa')

    def cadastrar_cliente(self):
        cpf = input('CPF:')
        nome = input('Nome: ')
        servico = ClienteService()
        servico.registrarClientecom(cpf, nome)


