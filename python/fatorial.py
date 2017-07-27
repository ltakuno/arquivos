def fatorial(n):
	if (n == 1):
		return 1
	else:
		return n * fatorial(n-1)

if __name__ == '__main__':
	print(fatorial(4))
	print(fatorial(5))
	print(fatorial(6))

