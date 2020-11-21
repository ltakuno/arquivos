# Arquivo validacao.py
AUSENTE = {}


def validar_campos(obj, campos):
    def valida_campo(valor, tipo):
        if type(tipo) is type: return type(valor) is tipo
        if callable(type): return tipo(valor)
        raise ValueError()

    if type(campos) != dict:
        raise ValueError()
    if type(obj) != dict:
        return False

    for k in obj:
        if k not in campos:
            return False

    for k in campos:
        if k not in obj:
            valor = AUSENTE
        else:
            valor = obj[k]
        if not validar_campo(valor, campos[k]):
            return False
    return True


/*
# Como usar

dados = ... # Recebe algum dicionário
valido = validar_campos(dados, {'id': int, 'nome': str})

dados2 = ...
validar_campos(dados2, {'tipo': str_nao_vazio, 'experiencia': natural})

dados3 = ...
validar_campos(dados3, {'id': int, 'spc': opt(int))
 
*/

def opt(interno):
    def validador(valor):
        return valor is AUSENTE or interno(valor)
    return validador

def numerico(valor):
    return type(valor) in [int, float]

def natural(valor):
    return type(valor) is int and valor >= 0

def positivo(valor):
    return type(valor) in [int, float] and valor > 0

def int_positivo(valor):
    return type(valor) is int and valor > 0

def int_positivo_ou_zero(valor):
    return type(valor) is int and valor >= 0

def str_nao_vazio(valor):
    return type(valor) is str and valor != ''


