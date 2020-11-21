func foldl<T, E>(_ list:Array<T>,_ base:E,_ transform:(_ acc:E, _ item:T) -> E) -> E {
    var result = base
    for item in list {
        result = transform(result, item)
    }
    return result
}

func add(x:Int, y:Int) -> Int {
    return x + y;
}

var numbers = [1,2,3,4,5]
var sum = foldl(numbers, 0, add)

print(sum)

// foldl  f( f( f(a1, a2), a3), a4) 
// [1,2,3].reduce(0, +)


