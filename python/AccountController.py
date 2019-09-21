# este  é um pseudo codigo que lembra python (acho que ruby)
# pode ser usado como base
class AccountController
    def create(params):
        CreateAccount.new.create(
                email:params[:email],
                cpf: params[:cpf])


class AccountRepository
    def create(account)
        #Persiste aacount


# Use Case
class CreateAccount
    def initialize(repository: AccountsRepository.new)
        @repository = repository

    def create(email, cpf)
        @repositorio.create(account)

    def buil_account(email, cpf))....
