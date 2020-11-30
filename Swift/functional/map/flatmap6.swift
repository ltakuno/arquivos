let numSet:Set = [Set([1,2,3,4]), Set([2,4,6,8,10])]
let flatSet = Set(numSet.flatMap{$0})
print(flatSet)
