# -*- coding: utf-8 -*-
from Contato import Contato
from ContatoDAO import ContatoDAO

dao = ContatoDAO()

def main():
    sair = False
    while not sair:
        opcao = menu_principal()

        if opcao == 1:
            inserir_contato()
        elif opcao == 2:
            buscar_contato()
        elif opcao == 3:
            sair = True
        else: 
            print('Erro: opção inválida!')
    print('Fim do programa')

def menu_principal():
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

def inserir_contato():
    print('\nINSERÇÃO DE NOVO CONTATO')
    nome = ler_nome()
    telefone = ler_telefone()
    c1 = Contato(nome,telefone)
    if dao.existe(c1):
        print('Este contato já está cadastrado!')
    else:
        dao.inserir(c1)
        print('Contato inserido!')

def ler_nome():
    nome = ''
    valido = False
    while (not valido):
        nome = input('Nome: ')
        if (len(nome) == 0 or len(nome) > 200):
            print('ERRO: nome de tamanho inválido!')
        else:
            valido = True
    return nome

def ler_telefone():
    telefone = ''
    valido = False
    while (not valido):
        telefone = input('Telefone: ')
        if (len(telefone) == 0 or len(telefone) > 25):
            print('ERRO: telefone de tamanho inválido!')
        else:
            valido = True
    return telefone

def buscar_contato():
    print('\nBUSCA DE CONTATO')
    nome = ler_nome()
    # resultado = []
    # for c in contatos:
    #     if nome == c.nome:
    #         resultado.append(c)
    resultado = dao.buscar(nome)

    if len(resultado) == 0:
        print('Não há contato com este nome!')
    else:
        print('Resultado da Busca')
        for c in resultado:
            print(c)


main()