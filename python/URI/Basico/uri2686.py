# 2686 - a mudança continua!!

def mostrar_horario(hora_inicio, m):
    v = m / 360 * 24 
    hora = (int(v) + hora_inicio) % 24
    print('{:02d}'.format(hora), end=":")
    minuto = ((v + 0.005 - int(v)) * 60) % 60 
    print('{:02d}'.format(int(minuto)), end=":")
    v = (v - int(v)) * 60 
    segundo = ((v + 0.005 - int(v)) * 60) % 60
    print('{:02d}'.format(int(segundo)))
 




def main():
    try:
        while True:
            m = float(input()) 
            if (m >= 0.0 and m < 90) or (m == 360.0):
                print('Bom Dia!!')
                mostrar_horario(6, m)
            elif m >= 90 and m < 180:
                print('Boa Tarde!!') 
                mostrar_horario(12, m - 90)
            elif m >= 180 and m < 270:
                print('Boa Noite!!')
                mostrar_horario(18, m - 180)
            elif m >= 270 and m < 360:
                print('De Madrugada!!')
                mostrar_horario(0, m - 270)

    except EOFError:
        pass
main()
