from django import forms


class EntradaForm(forms.Form):
    nome = forms.CharField(max_length=100)
    data = forms.DateTimeField()
    descricao = forms.CharField(widget=forms.Textarea)