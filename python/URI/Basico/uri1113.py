# 1113 - crescente e decrescente

a, b = map(int, input().split())

while a != b:
    if a < b:
        print("Crescente")
    else:
        print("Decrescente")

    a, b = map(int, input().split())

