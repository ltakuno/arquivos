# -*- coding: utf-8 -*-
from negocio.ContatoBusiness import ContatoBusiness
from excecoes.ExcecaoContatoJaEstaCadastrado import ExcecaoContatoJaEstaCadastrado
from excecoes.ExcecaoContatoNaoEncontrado import ExcecaoContatoNaoEncontrado

contatoBO = ContatoBusiness()
class Agenda:
    def executar(self):
        sair = False
        while not sair:
            opcao = self.menu_principal()

            if opcao == 1:
                inserir_contato()
            elif opcao == 2:
                buscar_contato()
            elif opcao == 3:
                sair = True
            else: 
                print('Erro: opção inválida!')

    def menu_principal(self):
        leia_inteiro = False   
        opcao = 0 
        while (not leia_inteiro):
            print('\nAGENDA TELEFÔNICA')
            print('(1) - Inserir')
            print('(2) - Buscar')
            print('(3) - sair')
            try:
                opcao = int(input('Escolha a opção:'))
                leia_inteiro = True
            except ValueError:
                print('Erro: opção inválida!')
                leia_inteiro = False
        
        return opcao

    def inserir_contato(self):
        print('\nINSERÇÃO DE NOVO CONTATO')
        nome = ler_nome()
        telefone = ler_telefone()
        try:
            contatoBO.inserir(nome, telefone)
        except ExcecaoContatoJaEstaCadastrado as e:
            print(e)
            return
        print('Contato inserido!')
    

    def ler_nome(self):
        nome = ''
        valido = False
        while (not valido):
            nome = input('Nome: ')
            if (len(nome) == 0 or len(nome) > 200):
                print('ERRO: nome de tamanho inválido!')
            else:
                valido = True
        return nome

    def ler_telefone(self):
        telefone = ''
        valido = False
        while (not valido):
            telefone = input('Telefone: ')
            if (len(telefone) == 0 or len(telefone) > 25):
                print('ERRO: telefone de tamanho inválido!')
            else:
                valido = True
        return telefone

    def buscar_contato(self):
        print('\nBUSCA DE CONTATO')
        nome = ler_nome()
        try:
            resultado = contatoBO.buscar(nome)
            print('Resultado da Busca')
            for c in resultado:
                print(c)
        except ExcecaoContatoNaoEncontrado as e:
            print(e)    
    
