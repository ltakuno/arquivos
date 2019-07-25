import Foundation

func equilibrium(_ numbers: [Int]) -> [Int]? {
	guard array.count > 1 else {
		return nil
	}

	var indices = [Int]()

	var left = 0
	var right = 0
	let count = numbers.count

	for i in 0..<count {
		left = 0
		right = 0
		for j in 0..<i {
			left = left + numbers[j]
		}

		for j in i+1..<count {
			right = right + numbers[j]
		}
		
		if left == right {
			indices.append(i)
		}
	}
	return indices.isEmpty ? nil : indices
}

let array = [-3, 2, -2, 1, -2]

if let result = equilibrium(array) {
	print(result)
} else {
	print("No equilibrium index found!")
}
