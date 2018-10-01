from .ValidationError import ValidationError
class ClienteValidador:
    def validar(self, cliente):
        if not(cliente.cpf):
            raise ValidationError