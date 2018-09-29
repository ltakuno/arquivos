# -*- coding: utf-8 -*-
from Model import Pessoa
from View import ViewPessoa

class Controller:
    def __init__(self):
        self.viewPessoa = ViewPessoa()

    def apresentar_conteudo(self):
        pessoas = Pessoa.obter_pessoas()
        self.viewPessoa.mostrar_todas(pessoas)

    
    def executar(self):
        self.viewPessoa.cabecalho()
        self.apresentar_conteudo()
        self.viewPessoa.rodape()


