//: Command - Represents commands as objects.

import Foundation

class Robo : CustomStringConvertible {
    let name : String
    var description: String {
        return name
    }

    init(name: String) {
        self.name = name
    }
}

protocol RoboCommand {
    func execute(robo: Robo)
}

class TurnRight : RoboCommand {
    func execute(robo: Robo) {
        print("\(robo) turns right ➡️")
    }
}

class TurnLeft : RoboCommand {
    func execute(robo: Robo) {
        print("\(robo) turns left ⬅️")
    }
}

class GoForward : RoboCommand {
    func execute(robo: Robo) {
        print("\(robo) goes forward ⬆️")
    }
}

class RoboProgram {
    let robo : Robo
    var commands : [RoboCommand] = []

    init(robo: Robo) {
        self.robo = robo
    }

    init(robo: Robo, commands: [RoboCommand]) {
        self.robo = robo
        self.commands = commands
    }

    func execute() {
        for command in commands {
            command.execute(robo: robo)
        }
    }
}

let robo = Robo(name: "Mikey")
let program = RoboProgram(robo: robo)
program.commands.append(GoForward())
program.commands.append(TurnLeft())
program.commands.append(GoForward())
program.commands.append(GoForward())
program.commands.append(TurnRight())
program.commands.append(GoForward())

program.execute()

