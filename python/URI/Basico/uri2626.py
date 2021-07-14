# 2626 - turma do jb6



def dodo_venceu(v):
    return (v[1] == v[2]) and ((v[0] - v[1]) % 3 == 1)

def leo_venceu(v):
    return (v[0] == v[2]) and ((v[1] - v[0]) % 3 == 1)

def pepper_venceu(v):
    return (v[0] == v[1]) and ((v[2] - v[0]) % 3 == 1)

def main():
    try:
        jogada = {'pedra': 0, 'papel': 1, 'tesoura': 2}
        while True:
            dodo, leo, pepper = map(str, input().split())
            v = [jogada[dodo], jogada[leo], jogada[pepper]]

            if (dodo_venceu(v)):
                print('Os atributos dos monstros vao ser inteligencia, sabedoria...')
            elif (leo_venceu(v)):
                print('Iron Maiden\'s gonna get you, no matter how far!')
            elif (pepper_venceu(v)):
                print('Urano perdeu algo muito precioso...')
            else:
                print('Putz vei, o Leo ta demorando muito pra jogar...')
    except EOFError:
        pass

main()
