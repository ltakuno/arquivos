let giraffes = [[5, 6, 9], [11, 2, 13, 20], [1, 13, 7, 8, 2]]
let tallest = giraffes.flatMap({ $0.filter({ $0 > 10 }) })

print(tallest)
