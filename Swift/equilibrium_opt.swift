import Foundation

func equilibiriumOptimized(_ numbers: [Int]) -> [Int]? {
	var indices = [Int]()

	var leftSum = 0 
	var sum = numbers.reduce(0, +)

	let count = numbers.count

	for i in 0..<count {
		sum = sum - numbers[i]
		if leftSum == sum {
			indices.append(i)
		}
		leftSum = leftSum + numbers[i]
	}

	return indices.isEmpty ? nil : indices
}

let array = [-3, 2, -2, 1, -2]

if let result = equilibriumOptimized(array) {
	print(result)
} else {
	print("No equilibrium index found!")
}

