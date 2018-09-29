import json

pessoas = []

pessoas.append({'nome':'Jose', 'sobrenome':'Silva'})
pessoas.append({'nome':'Joao', 'sobrenome':'Costa'})
pessoas.append({'nome':'Maria', 'sobrenome':'Pedroso'})

print(pessoas)

with open('dados.txt', 'w') as arquivo:  
    json.dump(pessoas, arquivo)
