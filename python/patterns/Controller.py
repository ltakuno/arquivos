# -*- coding: utf-8 -*-
from Model import Pessoa
from View import ViewPessoa


def apresentar_conteudo():
    pessoas = Pessoa.obter_pessoas()
    ViewPessoa.mostrar_todas(pessoas)

def executar():
    ViewPessoa.cabecalho()
    apresentar_conteudo()
    ViewPessoa.rodape()

if __name__ == '__main__':
    executar()
