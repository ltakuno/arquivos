# 2802 - 
# https://www.youtube.com/watch?v=_gMRRS1wbj4

n = int(input())
combinacao_n_2 = (n * (n-1)) / 2
combinacao_n_4 = (n * (n-1) * (n-2) * (n-3))/24

r = 1 + combinacao_n_2 + combinacao_n_4

print(int(r))
