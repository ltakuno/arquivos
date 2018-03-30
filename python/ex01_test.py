# -*- coding: utf-8 -*-
import time
import math
import os
# from os import name
# print(name)

# numeros = [num for num in range(5)]
# print(numeros)

# minha_lista = [1, 2, 3, 4, 5]
# sua_lista = [item ** 2 for item in minha_lista]

# print(minha_lista * 2)

# letras = ['a', 'b', 'c']
# print(letras * 2)


# numero = 56
# texto = 'carro'

# print(numero)
# print(texto)
# for c in texto:
#     print(c)

# fruta = 'banana'
# print(len(fruta))

# letra1 = 'O'
# letra2 = 'i'

# print(letra1 + letra2)

# s = 'Pedro, Paulo e Maria'
# print(s[0:5])
# print(s[7:12])

# saudacao = 'Alo mundo!!'
# saudacao[0] = 'E'
# print(saudacao)

# palavra = 'vai'
# print(3 * palavra)
# fruta = 'banana'
# print(fruta.startswith('ba'))
# print(fruta.startswith('xp'))


# fruta = 'banana'
# print('ana' in fruta)

# s = 'ABCDE'
# print(s[:-1])
# print(s[-1::-1])
# print(s[-5])

# fruta = 'banatna'
# print(fruta.find('x'))


# fruta = 'BaNaNa'
# print(fruta.lower())
# print(fruta.upper())
# print(fruta)


# vogais = ['a', 'e', 'i', 'o', 'u']
# s = '-'.join(vogais)
# print(s)
# s1 = ' '.join(vogais)
# print(s1)

# -*- coding: utf-8 -*-
# frase = 'a menina eh legal'
# print(frase)
# print(frase.replace('a','o'))
# print(frase.replace('a menina', 'o menino'))


# def construirSaudacao(nome = 'Python'):
#     return 'Olá %s !' % (nome)


# saudacao = construirSaudacao()
# print(saudacao)


# def soma(a, b):
#     return a + b 

# assert soma(2, 2) == 5, 'Erro na função soma!!'


# uma_lista = [4,2,8,6,5]
# outra_lista = [num*2 for num in uma_lista if num%2==1]
# print(outra_lista)

# def somaDiferenca(a, b):
#     return a+b, a-b

# s, d = somaDiferenca(5,3)

# print('A soma é %d e a diferençca é %d' % (s, d))


# def reverso(palavra1, palavra2):
#     return palavra1 == palavra2[-1::-1]


# def test_reverso():
#     assert reverso('stop', 'pots') == True
#     assert reverso('livres', 'servil') == True
#     assert reverso('ovo', 'ovo') == True
#     assert reverso('pera', 'pera') == False


# dic_vazio ={}
# print(dic_vazio)


# agenda = {'Igor': ['555-5555','111-1111'], 'Maria': '666-6666'}
# print(agenda)

# semana = ('segunda' , 'terca')
# print(semana)
# print(type(semana))

# dias_de_estudos = ('segunda',)
# print(dias_de_estudos)


#semana = 'segunda' , 'terca'

# print(len(semana))
# print(semana[-1])

# semana = 'segunda' , 'terca'
# del(semana)
# print(semana)

# semana = ('segunda', 'terca', 'quarta', 'quinta', 'sexta')
# lista_semana = list(semana)

# print(lista_semana)
# print(type(lista_semana))

# semana = ['segunda', 'terca', 'quarta', 'quinta', 'sexta']
# tupla_semana = tuple(semana)

# print(tupla_semana)
# print(type(tupla_semana))

# semana = ('segunda', 'terca', 'quarta', 'quinta', 'sexta')
# dias = semana + ('sabado', 'domingo')
# print(dias)




# numeros = (1,2,[3,4,5])

# numeros[2].pop(2)
# print(numeros)



# numeros = [1,2,3,4,5,6]
# saida  = [0,0,0,0,0,0]


# total = 1
# anterior = 0
# for i in range(len(numeros)):
#     anterior = total
#     total = total * numeros[i]
#     saida[i] = anterior

# total = 1
# anterior = 0

# for i in range(len(numeros)-1,-1,-1):
#     anterior = total
#     total = total * numeros[i]
#     saida[i] = saida[i] * anterior

# for n in saida:
#     print(n)

# class Veiculo:
#     numeroDeRodas = 0

# v = Veiculo()

# print(v.numeroDeRodas)


# class Televisao:
#     def __init__(self, min = 2, max = 20):
#         self.ligada = True
#         self.canal = 2
#         self.__cmin = min
#         self.__cmax = max

# tv = Televisao()


# print("Ligada %s" % (tv.ligada))
# print("Canal mínimo %d" % (tv.__cmin))
# print("Canal maximo %d" % (tv.__cmax))

# print(time.asctime())
# print(time.timezone)
# print(math.exp(1))
# print(os.name)

# n = input('Digite um numero: ')
# raiz = math.sqrt(n)
# print(raiz)
# print(math.exp(n))

# print(math.pi)
