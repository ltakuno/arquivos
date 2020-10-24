//     https://fluffy.es/show-price-in-2-decimal-places-using-numberformatter/


let formatter = NumberFormatter()
formatter.numberStyle = .decimal

// minimum decimal digit, eg: to display 2 as 2.00
formatter.minimumFractionDigits = 2

// maximum decimal digit, eg: to display 2.5021 as 2.50
formatter.maximumFractionDigits = 2

// round up 21.586 to 21.59. But doesn't round up 21.582, making it 21.58
formatter.roundingMode = .halfUp

let price = 21.58223
let roundedPriceString = formatter.string(for: price)

// output "rounded price is 21.58"
print("rounded price is \(roundedPriceString!)")
