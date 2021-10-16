import sys
from enum import Enum

class Atomo(Enum):
    ERRO = 0
    IDENTIFICADOR = 1
    NUM_INT = 2
    NUM_REAL = 3
    EOS = 4

class Analisador_Lexico:
    def __init__(self, buffer):
        self.nlinha = 1
        self.buffer = buffer + '\0'
        self.i = 0


    def proximo_token(self):
        atomo = Atomo.ERRO

        c = self.proximo_char()

        while (c in  [' ', '\n','\0']):
            if (c == '\n'):
                self.nlinha += 1
            if (c == '\0'):
                return Atomo.EOS
            c = self.proximo_char()

        if (c.isalpha()):
            atomo = self.reconhece_ID()
        elif (c.isdigit()):
            atomo = self.reconhece_NUM()

        return atomo

    def reconhece_ID(self):
        c = self.proximo_char()
        while (c.isalpha() or c.isdigit()):
            c = self.proximo_char()
        self.retract_char()
        return Atomo.IDENTIFICADOR

    def reconhece_NUM(self):
        c = self.proximo_char()
        estado = 2
        while True:
            if estado == 2:
                c = self.proximo_char()
                if (c == '.'): estado = 3
                elif (c.isdigit()): estado = 2
                elif (not c.isalpha()): return Atomo.NUM_INT
                else: return Atomo.ERRO
            elif estado == 3:
                c = self.proximo_char()
                if c.isdigit(): estado = 4
                else: return Atomo.ERRO
            elif estado == 4:
                c = self.proximo_char()
                if c.isdigit(): estado = 4
                elif not c.isalpha(): return Atomo.NUM_REAL
                else: return Atomo.ERRO


    def proximo_char(self):
        c = self.buffer[self.i]
        self.i += 1
        return c

    def retract_char(self):
        self.i -= 1

def leia_arquivo():
    if len(sys.argv) > 1:
        arquivo = open(sys.argv[1], 'r')
    else:
        arquivo = open('entrada.txt', 'r')
    buffer = arquivo.read()
    arquivo.close()
    return buffer

def main():
    buffer = leia_arquivo()
    lex = Analisador_Lexico(buffer)
    atomo = lex.proximo_token()
    while (atomo != Atomo.EOS and atomo != Atomo.ERRO):
        print("Linha: {}  -  atomo: {}".format(lex.nlinha, atomo.name))
        atomo = lex.proximo_token()
    print("Linha: {}  -  atomo: {}".format(lex.nlinha, atomo.name))
 
main()

