# 1847 - Bem-vindos e bem-vindas ao inverno

a, b, c = map(int, input().split())
if (a > b and (b == c or b < c)): print(":)")
elif (a < b and (b == c or b > c)): print(":(")
elif (a < b and b < c and ((b - a) > (c - b))): print(":(")
elif (a < b and b < c and ((c - b) >= (b - a))): print(":)")
elif (a > b and  (b - c) < (a - b)): print(":)")
elif (a > b and (b - c) >= (a - b)): print(":(")
elif (a == b and b < c): print(":)")
elif (a == b and b >= c):  print(":(")

