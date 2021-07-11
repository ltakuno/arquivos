# 2057 - fuso horario

s, t, f = map(int, input().split())
previsao = (s + t + f) % 24 
print(previsao)
