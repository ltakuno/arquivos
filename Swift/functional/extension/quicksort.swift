extension Array where Element: Comparable {
    func quickSort() -> [Element] {
        
        guard count > 1 else { return self }
        
        let (pivot, remaining) = (first!, dropFirst())
        let lhs = remaining.filter { $0 <= pivot }
        let rhs = remaining.filter { $0 > pivot }
        
        return lhs.quickSort() as [Element]+[pivot]+rhs.quickSort()
    }
}
print([2,3,1,4].quickSort()) // [1, 2, 3, 4]
