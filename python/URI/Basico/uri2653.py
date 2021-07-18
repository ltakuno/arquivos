# 2653 - Dijkstra

joias = {}

while True:
    try:
        joia = input()
        if not joia in joias:
            joias[joia] = 1
    except EOFError:
        print(sum(joias.values()))
        break


