v = float(input())
if (v >= 0.0 and v <= 25.0000):
    print("Intervalo [0,25]")
elif (v >= 25.0001 and v <= 50.0000):
    print("Intervalo (25,50]")
elif (v >= 50.0001 and v <= 75.0000):
    print("Intervalo (50,75]")
elif (v >= 75.0001 and v <= 100.0000):
    print("Intervalo (75,100]")
else: print("Fora de intervalo")
