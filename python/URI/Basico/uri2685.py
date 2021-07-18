# 2685 - a mudança

try:
    while True:
        m = int(input()) % 360

        if m in range(0, 90):
            print('Bom Dia!!')
        elif m in range(90, 180):
            print('Boa Tarde!!')
        elif m in range(180, 270):
            print('Boa Noite!!')
        elif m in range(270, 360):
            print('De Madrugada!!')
except EOFError:
    pass
