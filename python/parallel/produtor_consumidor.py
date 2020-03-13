# -*- coding: utf-8 -*-
from threading import Thread, Condition 
import time
import random


queue = [] 
condition = Condition()


class ProducerThread(Thread):
    def run(self):
        nums = range(5)
        global queue
        while True:
            num = random.choice(nums)
            condition.acquire()
            queue.append(num)
            print("Produzido", num)
            condition.notify()
            condition.release()
            time.sleep(random.random())


class ConsumerThread(Thread):
    def run(self):
        global queue
        while True:
            condition.acquire()
            if not queue:
                print "Fila vazia, consumidor aguardando ..."
                condition.wait()
                print "Produtor incluiu algum elemento na fila ..."
            num = queue.pop(0)
            print("Consumido", num)
            condition.release()
            time.sleep(random.random())


ProducerThread().start()
ConsumerThread().start()
