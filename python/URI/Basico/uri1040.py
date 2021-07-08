# media 3
a, b, c, d = map(float, input().split())

media = (a*2 + b*3 + c*4 + d) / 10.0

print("Media: {:.1f}".format(media))

if (media >= 7):
    print("Aluno aprovado.")
else:
    if (media < 5):
        print("Aluno reprovado.")
    elif (media >= 5 and media <= 6.90):
        print("Aluno em exame.")
        exame = float(input())
        print("Nota do exame: {:.1f}".format(exame))
        media = (media + exame)/2
        if (media >= 5.0):
            print("Aluno aprovado.")
        else:
            print("Aluno reprovado.")
        print("Media final: {:.1f}".format(media))
