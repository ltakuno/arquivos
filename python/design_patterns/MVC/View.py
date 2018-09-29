# -*- coding: utf-8 -*-
from Model import Pessoa

class ViewPessoa:
    def mostrar_todas(self, pessoas):
        print('Numero de pessoas: %d' % (len(pessoas)))
        for pessoa in pessoas:
            print (pessoa.nome_completo())

    def cabecalho(self):
        print('Exemplos simples do MVC')

    def rodape(self):
        print('Fim da Visualização!')