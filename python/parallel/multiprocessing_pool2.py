from multiprocessing import Pool

def f(n):
	return n*n

if __name__ == "__main__":
	p = Pool(processes=2)
	result = p.imap_unordered(f, [1,2,3,4,5])
	for n in result: 
		print(n)
