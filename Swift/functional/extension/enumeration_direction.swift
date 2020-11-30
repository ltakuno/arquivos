
enum Direction {
    case up
    case down
    case left
    case right
}

extension Direction {
    func move(_ location: inout (x: Int,y: Int)){
        switch self {
        case .up:
            location.y += 1
        case .down:
            location.y -= 1
        case .right:
            location.x += 1
        case .left:
            location.x -= 1
        }
    }
}

var location = (x: 0, y: 0)
var steps: [Direction] = [.up, .up, .left, .down, .left]
steps.forEach{ $0.move(&location) }
print(location)
