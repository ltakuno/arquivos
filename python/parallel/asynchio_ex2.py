import asyncio

def gerador_de_numeros(inicio, fim):
    yield from range(inicio, fim+1)


@asyncio.coroutine
def filtrar_primos(inicio, fim):
    primos = []

    for i in gerador_de_numeros(inicio, fim):
        if i % 2 == 0: continue
        eh_primo = True

        for j in range(3, int(i**0.5 + 1), 2):
            if i % j == 0:
                eh_primo = False
                break
        if eh_primo:
            print('Primo => ', i)
            primos.append(i)

    yield from asyncio.sleep(1)
    return tuple(primos)

@asyncio.coroutine
def mapear_quadrados(inicio, fim):
    quadrados = []

    for i in gerador_de_numeros(inicio, fim):
        print('Quadrado => ', i*i)
        quadrados.append(i*i)

    yield from asyncio.sleep(1)
    return quadrados

def mostrar_resultados(future):
    print('Result => ', future.result())


loop = asyncio.get_event_loop()
future = asyncio.gather(filtrar_primos(10, 50), mapear_quadrados(10, 50))
future.add_done_callback(mostrar_resultados)
loop.run_until_complete(future)

loop.close()
