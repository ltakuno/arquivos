# 1049 - Animal

s1 = input()
s2 = input()
s3 = input()

if (s1 == "vertebrado"):
    if (s2 == "ave"):
        if (s3 == "carnivoro"):
            print("aguia")
        elif (s3 == "onivoro"):
            print("pomba")
    elif (s2 == "mamifero"):
        if (s3 == "onivoro"):
            print("homem")
        elif (s3 == "herbivoro"):
            print("vaca")
elif (s1 == "invertebrado"):
    if (s2 == "inseto"):
        if (s3 == "hematofago"):
            print("pulga")
        elif (s3 == "herbivoro"):
            print("lagarta")
    elif (s2 == "anelideo"):
        if (s3 == "hematofago"):
            print("sanguessuga")
        elif (s3 == "onivoro"):
            print("minhoca")


