""" Modulo fatorial.py """
def fatorial(n):
    """ Return factorial of n """
    if n == 0:
        return 1
    else:
        return n * fatorial(n-1)
