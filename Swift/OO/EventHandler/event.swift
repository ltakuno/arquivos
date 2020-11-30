class Event<T> {

  typealias EventHandler = (T) -> ()

  private var eventHandlers = [EventHandler]()

  func addHandler(handler: @escaping EventHandler) {
    eventHandlers.append(handler)
  }

  func raise(_ data: T) {
    for handler in eventHandlers {
      handler(data)
    }
  }
}



let event = Event<(String, String)>()
event.addHandler { a, b in print("Hello \(a), \(b)") }
let data = ("Colin", "Eberhardt")
event.raise(data)
