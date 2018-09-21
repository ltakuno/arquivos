class Borg(object):
    __shared_state = {}
    def __new__(cls, *args, **kargs):
        obj = super(Borg, cls).__new__(cls, *args, **kargs)
        obj.__dict__ = cls.__shared_state
        return obj


b = Borg()
b1 = Borg()

b.x = 4

print("Borg Object 'b':", b)
print("Borg Object 'b1':", b1)
print("Object State 'b':", b.__dict__)
print("Object State 'b1':", b1.__dict__)

  