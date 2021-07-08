codigo, quantidade = map(int, input().split())
precos = [4.0, 4.5, 5.0, 2.0, 1.5]
print("Total: R$ {:.2f}".format(precos[codigo-1] * quantidade))
