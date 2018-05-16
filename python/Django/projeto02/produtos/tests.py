from django.test import TestCase
from django.contrib.auth.models import User, AnonymousUser
from produtos.models import Produto
from datetime import datetime
from django.urls import reverse, resolve
from django.test import RequestFactory
from produtos.views import produtos_detalhes


class TesteProduto(TestCase):
    def setUp(self):
        self.produto0 = Produto.objects.create(nome='produto0', descricao='produto teste', preco=10.0, quantidade=5, publicado_em=datetime.now())

    def test_criar_produto(self):
        self.assertEqual(self.produto0.nome, 'produto0')

    def test_consultar_produto(self):
        self.assertEqual(self.produto0.nome, Produto.objects.all()[0].nome)

    def test_consultar_descricao_produto(self):
        self.assertEqual(self.produto0.descricao, Produto.objects.all()[0].descricao)

    def test_consultar_propriedade(self):
        self.assertEqual(self.produto0.tem_no_estoque, True)

    def test_soma01(self):
        self.assertEqual(1+1,2)


class TesteURL(TestCase):
    def test_detalhe_url(self):
        path = reverse('detalhe', kwargs={'pk': 1})
        assert resolve(path).view_name == 'detalhe'

class TesteViews(TestCase):
    def setUp(self):
        self.produto0 = Produto.objects.create(nome='produto0', descricao='produto teste', preco=10.0, quantidade=5, publicado_em=datetime.now())

    def test_produto_detalhe_nao_autenticado(self):
        path = reverse('detalhe', kwargs={'pk': 1})
        request = RequestFactory().get(path)
        request.user = AnonymousUser()
        response = produtos_detalhes(request, pk=1)
        assert response.status_code == 200
        
    