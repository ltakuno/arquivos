import time
import multiprocessing

square_results = []
def calc_square(numbers):
	for n in numbers:
		print('square ' + str(n*n))
		square_results.append(n*n)
	print("within a process: result " + str(square_results))



if __name__ == "__main__":
	arr = [2, 3, 8, 9]

	p1 = multiprocessing.Process(target=calc_square, args=(arr,))
	p1.start()
	p1.join()

	print ("Result:" + str(square_results))

	print("Done!")
