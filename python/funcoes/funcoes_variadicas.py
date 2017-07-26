def lista_de_argumentos(*lista):
	print(lista)


def lista_de_argumentos_associativos(**dicionario):
	print(dicionario)

def lista_de_args(*args, **kwargs):
	print(args)
	print(kwargs)

lista_de_argumentos(1,2,3,4,5)
lista_de_argumentos_associativos(a=1,b=2,c=3,d=4)
lista_de_argumentos_associativos(um=1, dois=2, tres=3, quatro=4)
lista_de_args(1,2,3,4,um=1,dois=2)
