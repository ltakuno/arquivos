let celsius = [-5.0, 10.0, 21.0, 33.0, 50.0]
let fahrenheit = celsius.map { $0 * (9/5) + 32 }
print(fahrenheit)
