/*
  Faça uma função string_to_int que recebe uma string s 
  contendo somente números (e.g. "1234") e devolva
  uma lista com os digitos em formato Int
*/


func string_to_int(_ s: String) -> [Int] {
    return s.map{ Int(String($0)) ?? 0 }
}

print(string_to_int("1234"))
