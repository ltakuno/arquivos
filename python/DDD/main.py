# -*- coding:utf-8 -*-

from user_interface.user_interface import Aplicacao

def main():
    aplicacao = Aplicacao()
    opcao = aplicacao.menu()

    while (opcao != 3):
        aplicacao.executar(opcao)
        opcao = aplicacao.menu()

main()    