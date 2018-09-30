class Emprestimo:
    def __init__(self, cli_cpf, data, valor, obs, taxa = 20):
        self.cli_cpf = cli_cpf
        self.data = data
        self.valor = valor
        self.obs = obs
        self.taxa = taxa