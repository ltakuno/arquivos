/*
Criar um programa que calcule o M.M.C (mínimo múltiplo comum)
entre dois números lidos. (por exemplo: o M.M.C, entre 10 e 15 é 30) 

10: {10, 20, 30, 40, 50, 60..}
15: {15, 30, 45, 60, 75, 90..}

*/

print("Digite o valor de n1: ", terminator: "")
let n1 = Int(readLine()!)!

print("Digite o valor de n2: ", terminator: "")
let n2 = Int(readLine()!)!

var n: Int = max(n1, n2)
while n % n1 != 0 || n % n2 != 0 {
  n += 1    
}
print("O MMC entre \(n1) e \(n2) é \(n)")
