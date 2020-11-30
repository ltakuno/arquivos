// Como deixar este código mais legível?
func opp (_ z: (Int,(Int,Int))) -> Int{
   if (z.0 == 1){
       return z.1.0 + z.1.1
   } else if (z.0 == 2){
       return z.1.0 - z.1.1
   } else {
       return 0
   }
}

// Como deixar este código mais legível?
func opp1 (_ z: (a: Int,(b: Int, c: Int))) -> Int{
   if (z.a == 1){
       return z.1.b + z.1.c
   } else if (z.a == 2){
       return z.1.b - z.1.c
   } else {
       return 0
   }
}

// Usando pattern matching
func opp2 (_ z: (Int,(Int,Int))) -> Int{
   switch(z){
    case let (1,(a,b)): 
        return a + b
    case let (2,(a,b)):
        return a - b
    default:
        return 0  
   } 
}

print(opp((1, (4,5))))
print(opp1((a: 2, (b: 8,c: 5))))
print(opp2((2, (8, 5))))
