class Encapsulation(object):
    def __init__(self, a, b, c):
        self.myPublic = a
        self._myProtected = b
        self.__myPrivate = c

if __name__ == '__main__':

    myEncapsulation=Encapsulation(1,2,3)

    print(myEncapsulation.myPublic)
    print(myEncapsulation._myProtected)
    #print(myEncapsulation.__myPrivate) 