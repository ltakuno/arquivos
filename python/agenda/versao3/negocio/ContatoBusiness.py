from persistencia.Contato import Contato
from persistencia.ContatoDAO import ContatoDAO 
from excecoes.ExcecaoContatoJaEstaCadastrado import ExcecaoContatoJaEstaCadastrado
from excecoes.ExcecaoContatoNaoEncontrado import ExcecaoContatoNaoEncontrado
dao = ContatoDAO()

class ContatoBusiness:
    def inserir(self, nome, telefone):
        c1 = Contato(nome,telefone)
        if dao.existe(c1):
            raise ExcecaoContatoJaEstaCadastrado('Este contato já está cadastrado!')
        else:
            dao.inserir(c1)

    def buscar(self, nome):
        resultado = dao.buscar(nome)
        if len(resultado) == 0:
            raise ExcecaoContatoNaoEncontrado('Não há contato com este nome!')        
        return resultado