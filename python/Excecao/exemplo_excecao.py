class MinhaExcecao(Exception): pass

def funcao(x):
    if (x < 0 or x > 100):
        raise MinhaExcecao("Valor incorreto")
    else: 
        return x

def f(x):
    try:
        funcao(x)
    except MinhaExcecao as e:
        print e
        raise MinhaExcecao("Tratamento da excecao")

def main():
        f(1000)

if __name__ == '__main__':
    main()