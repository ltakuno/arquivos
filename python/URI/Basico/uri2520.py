# 2520 - o ultimo analogimon

try:
    while True:
        n, m = map(int, input().split())

        grade = []
        for _ in range(n):
            grade.append(list(map(int, input().split())))

        x1, y1, x2, y2 = 0, 0, 0, 0

        for i in range(n):
            for j in range(m):
                if grade[i][j] == 2:
                    x2 = i
                    y2 = j
                if grade[i][j] == 1:
                    x1 = i
                    y1 = j

        # distancia de manhattan
        distancia = abs(x1 - x2) + abs(y1 - y2)
        print(distancia)

except EOFError:
    pass


