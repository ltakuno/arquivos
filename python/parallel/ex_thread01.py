import threading
 
class MinhaThread (threading.Thread):
    def __init__(self, threadID, nome, contador):
        threading.Thread.__init__(self)
        self.threadID = threadID
        self.nome = nome
        self.contador = contador
    def run(self):
        tarefa(self.nome, self.contador)
 
def tarefa(nome, contador):
    while contador:
        print "Thread %s executando tarefa %d" % (nome, contador)
        contador -= 1
 
# Criando as threads
thread1 = MinhaThread(1, "thread 01", 8)
thread2 = MinhaThread(2, "thread 02", 8)
 
# Comecando novas Threads
thread1.start()
thread2.start()
 
threads = []
threads.append(thread1)
threads.append(thread2)
 
for t in threads:
    t.join()
 
