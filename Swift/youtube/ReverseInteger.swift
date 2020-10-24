/*
Problem: Reverse digits if an integer
Example:

  x = 123, return 321
  x = -123, return -321

Also if the integer last digit is 0, what shoild the output be? case like 10, 100
Also if we assume the input is a 32 bit integer, the the rever of 10000000003 overflows
However, if maybe not the case for example the Int can be either 32 bit ou 64 bit depend
on which OS you use on MacBook

*/

func reverse(_ input: Int) -> Int {
    var x = input
    var returnVal = 0
    while(x != 0){
        returnVal = 10 * returnVal + x % 10
        x = x / 10    
    }
    if (returnVal > Int.max || returnVal < Int.min){
        return 0
    } else {
       return returnVal
    }
}


print(reverse(123))
print(reverse(-123))
print(reverse(10000000003))
