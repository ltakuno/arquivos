import Foundation

struct Produto{
    let nome: String
    let preco: Float
    init(nome: String, preco: Float){
        self.nome = nome
        self.preco = preco
    }
}

class CarrinhoDeCompra{
    private var produtos: [Produto] = []

    func adiciona(produto: Produto, quantidade: Int){
        for _ in 1...quantidade{
            produtos.append(produto)
        }
    } 

    func total() -> Float{
        return produtos.reduce(0.0, {acc, prod in return acc + prod.preco})
    }

    func desconto() -> Float{
        return produtos.filter{ $0.preco > 10000 }.map{$0.preco * 0.05}.reduce(0.0, +)
    }
   
}

let carrinho = CarrinhoDeCompra()

carrinho.adiciona(produto: Produto(nome:"iphone 12 Pro Max", preco:10000), quantidade: 2)
carrinho.adiciona(produto: Produto(nome:"MacBook Pro 15-inch", preco:20000), quantidade: 2)
carrinho.adiciona(produto: Produto(nome:"iMac 5k Display", preco:30000), quantidade: 2)


print(carrinho.total())
print(carrinho.desconto())
