import XCTest

/*
Create a function that returns the sum of the two lowest positive numbers given an array of minimum 4 positive integers. No floats or non-positive integers will be passed.

For example, when an array is passed like [19, 5, 42, 2, 77], the output should be 7.

[10, 343445353, 3453445, 3453545353453] should return 3453455.
*/

func sumOfTwoSmallestIntegersIn(_ array: [Int]) -> Int {
  var m1: Int
  var m2: Int
  
  m1 = array[0] > array[1] ? array[0] : array[1]
  m2 = array[0] < array[1] ? array[0] : array[1]
  
  if (array.count > 2){
    for i in 2 ..< array.count{
      if array[i] < m2{
        m1 = m2
        m2 = array[i]
      } else if array[i] < m1{
        m1 = array[i]
      }
    }
  }
  
  return m1+m2
}

class SolutionTest: XCTestCase {
    static var allTests = [
        ("Basic tests", basicTests),
    ]

    func basicTests() {
        XCTAssertEqual(sumOfTwoSmallestIntegersIn([5, 8, 12, 18, 22]), 13)
        XCTAssertEqual(sumOfTwoSmallestIntegersIn([7, 15, 12, 18, 22]), 19)
        XCTAssertEqual(sumOfTwoSmallestIntegersIn([25, 42, 12, 18, 22]), 30)
        XCTAssertEqual(sumOfTwoSmallestIntegersIn([1, 8, 12, 18, 5]), 6)
        XCTAssertEqual(sumOfTwoSmallestIntegersIn([13, 12, 5, 61, 22]), 17)
    }
}

XCTMain([
    testCase(SolutionTest.allTests)
])
