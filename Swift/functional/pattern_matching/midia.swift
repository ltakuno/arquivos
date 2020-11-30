import Foundation
enum Midia{
    case livro(titulo: String, autor: String, ano: Int)
    case filme(titulo: String, diretor: String, ano: Int)
    case website(url: NSURL, titulo: String)
    case youtube(url: NSURL, titulo: String)
}

extension Midia {
    var titulo: String {
        switch self {
            case .livro(titulo: let t, autor: _, ano: _):
                return t
            case .filme(titulo: let t, diretor: _, ano: _):
                return t
            case .website(url: _, titulo: let t):
                return t
            case .youtube(url: _, titulo: let t):
                return t
        }
    }

    var publicadoApos1930: Bool {
        switch self {
            case let .livro(_, _, year) where year > 1930:      return true
            case let .filme(_, _, year) where year > 1930:      return true
            case .website: return true 
            case .youtube: return true 
            default: return false
        }
    }
}

let livro = Midia.livro(titulo: "Introdução ao SwiftUI", 
                        autor: "Joao da Silva", 
                        ano: 2019)

print(livro.titulo)
print(livro.publicadoApos1930)
