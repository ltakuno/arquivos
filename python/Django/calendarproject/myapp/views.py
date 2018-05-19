from django.shortcuts import render, get_object_or_404
from django.http import HttpResponseRedirect
from .forms import EntradaForm
from .models import Entrada


def index(request):
    entradas = Entrada.objects.all()
    return render(request, 'myapp/index.html', {'entradas' : entradas})

def detalhes(request, pk):
    entrada = Entrada.objects.get(pk=pk)
    return render(request, 'myapp/detalhes.html', {'entrada' : entrada})

def adicionar(request):
    if (request.method == 'POST'):
        form = EntradaForm(request.POST)
        if form.is_valid():
            nome = form.cleaned_data['nome']
            data = form.cleaned_data['data']
            descricao = form.cleaned_data['descricao']
            
            Entrada.objects.create(
                nome=nome,
                data=data,
                descricao=descricao,
            ).save()

            return HttpResponseRedirect('/')
    else:
        form = EntradaForm()

    return render(request, 'myapp/form.html', {'form': form})

def remover(request, pk):
    if request.method == 'DELETE':
        entrada = get_object_or_404(Entrada, pk=pk)
        entrada.delete()

    return HttpResponseRedirect('/')