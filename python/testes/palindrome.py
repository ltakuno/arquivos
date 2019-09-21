def eh_palindrome(palavra):
    """ 
    Devolve True se palavra e palindrome, False caso contrario
    """

    palavra = palavra.lower()
    return palavra == palavra[-1::-1]
