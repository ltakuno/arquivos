class ErroLexicoException(Exception):
    pass

class Analisador_Lexico:
    def __init__(self, buffer):
        self.buffer = buffer
    def gerar_erro(self, erro):
        raise ErroLexicoException('Erro léxico: {}'.format(erro))
    def executar(self):
        i = 0
        estado = 0
        while i < len(self.buffer):
            if estado == 0:
                if (self.buffer[i] == 'a'):   estado = 1
                elif (self.buffer[i] == 'b'): estado = 0
                else: self.gerar_erro('simbolo incorreto')
            elif estado == 1:
                if (self.buffer[i] == 'a'):   estado = 0
                elif (self.buffer[i] == 'b'): estado = 1
                else: self.gerar_erro('simbolo incorreto')
            i += 1
        return (estado == 1)


def main():
    buffer = input()
    try:
        if (Analisador_Lexico(buffer).executar() == True):
            print('aceita')
        else:
            print('rejeita')
    except ErroLexicoException as e:
        print(e)



main()
