# -*- coding: utf-8 -*-
from Model import Pessoa

class ViewPessoa:
    @classmethod
    def mostrar_todas(self, pessoas):
        print('Numero de pessoas: %d' % (len(pessoas)))
        for pessoa in pessoas:
            print (pessoa.nome_completo())

    @classmethod
    def cabecalho(self):
        print('Exemplos simples do MVC')

    @classmethod
    def rodape(self):
        print('Fim da Visualização!')