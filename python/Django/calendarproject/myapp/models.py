from django.db import models

class Entrada(models.Model):
    nome = models.CharField(max_length=100)
    data = models.DateTimeField()
    descricao = models.TextField()
    criado_em = models.DateTimeField(auto_now_add=True)

    def __str__(self):
        return self.nome