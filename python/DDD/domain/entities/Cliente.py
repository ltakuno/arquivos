class Cliente:
	def __init__(self, cpf, nome='', rg='', endereco='', complemento='', cidade='', uf='', telefone='', celular='', obs=''):
		self.__id = 0
		self.__cpf = cpf
		self.__nome = nome
		self.rg = rg
		self.endereco = endereco
		self.complemento = complemento
		self.cidade = cidade 
		self.uf = uf
		self.telefone = telefone
		self.celular = celular
		self.obs = obs

	@property
	def id(self):
		return self.__id

	@id.setter
	def id(self, value):
		self.__id = value

	@property 
	def nome(self):
		return self.__nome

	@property
	def cpf(self):
		return self.__cpf

	