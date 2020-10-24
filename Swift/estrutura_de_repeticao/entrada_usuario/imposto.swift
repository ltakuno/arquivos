
/*
Calcule o imposto de renda de um grupo de 10 contribuintes, considerando que os dados de cada contribuinte, número do CPF, número de dependentes e renda mensal são valores fornecidos pelo usuário. Para cada contribuinte será feito um desconto de 5% do salário mínimo por dependente.

Os valores da alíquota para cálculo do imposto são: 
Renda Líquida                  |           Alíquota
-------------------------------+----------------------------------
Até 2 salários mínimos         |             Isento
2 a 3 salários mínimos         |             5%
3 a 5 salários mínimos         |             10%
5 a 7 salários mínimos         |             15%
Acima de 7 salários mínimos    |             20%


Observe que deve ser fornecido o valor atual do salário mínimo para que o programa calcule os valores corretamente.
*/

let salario_minimo: Float = 1045.00

for _ in 1...10 {
  print("Digite o CPF: ")
  let cpf = readLine()!
  print("Digite o número de dependentes: ")
  let numero_dependentes = Int(readLine()!)!
  print("Digite a renda mensal: ")
  let renda = Float(readLine()!)!

  let numero_de_salarios = renda/salario_minimo
  var aliquota: Float = 0.0
  switch(numero_de_salarios){
    case 0...2:
      aliquota = 0.0

    case 2.01...3:
      aliquota = 0.05 

    case 3.01...5:
      aliquota = 0.10 

    case 5.01...7:
      aliquota = 0.15 
    
    default:
      aliquota = 0.20 
  }

  if aliquota == 0.0{
    print("Isento")
  } else {
    let desconto =  (Float(numero_dependentes) * 0.05)
    let imposto = ((12.0 * renda) * aliquota) 
    print("Valor do imposto paro o cpf \(cpf): \(imposto - imposto*desconto)")
  }
}
