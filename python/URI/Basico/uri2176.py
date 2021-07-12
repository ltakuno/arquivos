# 2176 - paridade

s = input()

num_bits_um = len(list(filter(lambda x: x == '1', s)))

if num_bits_um % 2 == 1:
    print('{}1'.format(s))
else:
    print('{}0'.format(s))
