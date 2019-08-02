class ICMS(object):
    def calculaICMS(self, orcamento):
        return orcamento.valor * 0.1


class ISS(object):
    def calculaISS(self, orcamento):
        return orcamento.valor * 0.06
