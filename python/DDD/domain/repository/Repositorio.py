class Repositorio(object):
    repositorios = {}

    @classmethod
    def registrar(cls, type_, repositorio):
        cls.repositorios[type_] = repositorio

    @classmethod
    def obter(cls, tipo_):
        return cls.repositorios[tipo_]

    @classmethod
    def todos(cls):
        return cls.repositorios
