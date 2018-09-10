# -*- coding: utf-8 -*-
from random import randint

j1 = 15
j2 = 14
j3 = 13
b = 0

def jogador1_distribui():
	global j2
	global j3
	global b
	global j1
	j2 = j2 + 1
	j3 = j3 + 1
	b = b + 1
	j1 = j1 - 3

def jogador2_distribui():
	global j2
	global j3
	global b
	global j1
	j1 = j1 + 1
	j3 = j3 + 1
	b = b + 1
	j2 = j2 - 3

def jogador3_distribui():
	global j2
	global j3
	global b
	global j1
	j1 = j1 + 1
	j2 = j2 + 1
	b = b + 1
	j3 = j3 - 3 

def main():
	global j2
	global j3
	global b
	global j1
	rodada = 1

	while j1 > 0 and j2 > 0  and j3 > 0:
		if j1 > j2 and j1 > j3:
			jogador1_distribui()
		elif j2 > j1 and j2 > j3:
			jogador2_distribui()
		elif j3 > j1 and j3 > j2:
			jogador3_distribui()
		elif j1 == j2 and j1 > j3:
			if (randint(1,2) == 1):	
				jogador1_distribui()		
			else:
				jogador2_distribui() 
		elif j1 == j3 and j1 > j2:
			if (randint(1,2) == 1):	
				jogador1_distribui()		
			else:
				jogador3_distribui() 
		elif j2 == j3 and j2 > j1:
			if (randint(1,2) == 1):	
				jogador2_distribui()		
			else:
				jogador3_distribui() 
		print( "rodada %d - j1(%d), j2(%d), j3(%d), b(%d)" % (rodada,j1, j2, j3, b)) 
		rodada = rodada + 1

	if (j1 == 0):
		print("O jogador 1 é o vencedor");
	elif (j2 == 0):
		print("O jogador 2 é o vencedor");
	elif (j3 == 0):
		print("O jogador 3 é o vencedor");

main()

