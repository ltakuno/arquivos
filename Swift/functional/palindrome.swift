/*
  Faça uma função palindrome que receba uma string e devolva 
  true se a string é palindrome e false caso contrário
  Obs: nao inverta a string
*/

func palindrome(_ s: String) -> Bool{
    func checa_palindrome(_ x: Array<Character>, _ i: Int, _ f: Int) -> Bool{
        if (f - i + 1) < 2 {
            return true
        } else {
            if x[i] != x[f] {
                return false
            } else {
                return checa_palindrome(x, i+1, f-1)
            }     
        }
    }
    return checa_palindrome(Array(s), 0, s.count-1)
}

print(palindrome("ovo"))
print(palindrome("swift"))
print(palindrome("subinoonibus"))
