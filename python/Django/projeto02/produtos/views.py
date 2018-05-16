from django.shortcuts import render, get_object_or_404
from .models import Produto

def produtos_detalhes(request, pk):
    produto = get_object_or_404(Produto, pk=pk)
    return render(request, 'detalhe_produto.html', {'produto': produto})

