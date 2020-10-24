import XCTest

/*[]-----------------------------------------------------------[]

Are they the same?

   if we change the first number to something else, 
   comp may not return true anymore:

   a = [121, 144, 19, 161, 19, 144, 19, 11]  
   b = [132, 14641, 20736, 361, 25921, 361, 20736, 361]

   comp(a,b) returns false because in b 132 is not 
   the square of any number of a.

   a = [121, 144, 19, 161, 19, 144, 19, 11]  
   b = [121, 14641, 20736, 36100, 25921, 361, 20736, 361]
 []-----------------------------------------------------------[]*/

func comp(_ a: [Int], _ b: [Int]) -> Bool {
    if (a.count != b.count){
      return false
    }
    var d = [Int: Int]() 
    var i: Int  = 0
    while (i < b.count){
      if let cont = d[b[i]]{
        d[b[i]] = cont + 1
      }
      else {
        d[b[i]] = 1
      }
      i += 1
    }

    i = 0
    while (i < a.count){
      if  let  cont = d[a[i]*a[i]] {
        d[a[i]*a[i]] = cont - 1
        if d[a[i]*a[i]] == 0 {
          d[a[i]*a[i]] = nil
        }
      } else {
        return false
      }
          
      i += 1
    }
    
    return true
}

class SolutionTest: XCTestCase {
    static var allTests = [
        ("comp", testExample),
    ]

    func testing(_ a: [Int], _ b: [Int], _ expected: Bool) {
        XCTAssertTrue(comp(a, b) == expected, "should return \(expected)")
    } 

    func testExample() {       
        var a1 = [121, 144, 19, 161, 19, 144, 19, 11];
        var a2 = [11*11, 121*121, 144*144, 19*19, 161*161, 19*19, 144*144, 19*19];
        testing(a1, a2, true);
       

        a1 = [121, 144, 19, 161, 19, 144, 19, 11];
        a2 = [11*21, 121*121, 144*144, 19*19, 161*161, 19*19, 144*144, 19*19];
        testing(a1, a2, false);
        
        a1 = [121, 144, 19, 161, 19, 144, 19, 11]  
        a2 = [132, 14641, 20736, 361, 25921, 361, 20736, 361]
        testing(a1, a2, false);       
 
        
        a1 = [121, 144, 19, 161, 19, 144, 19, 11]  
        a2 = [121, 14641, 20736, 36100, 25921, 361, 20736, 361]
        testing(a1, a2, false);


        
    }
}

XCTMain([
    testCase(SolutionTest.allTests)
])
