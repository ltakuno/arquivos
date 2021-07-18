# 2721 - indecisão das renas

renas = ['Dasher', 'Dancer', 'Prancer', 'Vixen', 'Comet', 'Cupid', 'Donner', 'Blitzen', 'Rudolph']
n = sum(list(map(int, input().split()))) - 1
print(renas[n % 9])

