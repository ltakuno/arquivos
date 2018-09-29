# -*- coding: utf-8 -*-
import json

class Pessoa(object):
    def __init__(self, nome=None, sobrenome=None):
        self.nome = nome
        self.sobrenome = sobrenome

    def nome_completo(self):
        return ("\t%s %s" % (self.nome, self.sobrenome))

    @classmethod
    def obter_pessoas(self):
        pessoas = []
        arquivo = open('dados.txt', 'r')
        lista_json = json.load(arquivo)
        for item in lista_json:
            nova_pessoa = Pessoa(item['nome'], item['sobrenome'])
            pessoas.append(nova_pessoa)
        
        return pessoas



