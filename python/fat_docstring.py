#
# Comentários:
#

def fat1(n):
#   Entre com fat1(n) para calcular o fatorial de n
#   Exemplo: fat1(5)
    if (n <= 1):
       return 1
    return n * fat1(n-1)

#
# Docstrings:
#

def fat2(n):
    '''
    Entre com fat2(n) para calcular o fatorial de n
    Exemplo: fat2(5)
    '''
    if (n <= 1):
       return 1
    return n * fat1(n-1)
