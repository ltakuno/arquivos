l1 = input().split()
l2 = input().split()

(codigo1, qtd_peca1, valor_unitario1) = (int(l1[0]), int(l1[1]), float(l1[2]))
(codigo2, qtd_peca2, valor_unitario2) = (int(l2[0]), int(l2[1]), float(l2[2]))

total = valor_unitario1 * qtd_peca1 + valor_unitario2 * qtd_peca2

print("VALOR A PAGAR: R$ {:.2f}".format(total))

