import random
a1, a2 = [], []

def common_items(seq1, seq2):
    common =[]
    for item in seq1:
        if item in seq2:
            common.append(item)
    return common

def setup(n):
    """ Setup data """
    global a1, a2
    a1 = random.sample(range(0, 2*n), n)
    a2 = random.sample(range(0, 2*n), n)


def test():
    """ Testando função common_items() """
    global a1, a2
    common = common_items(a1, a2)
