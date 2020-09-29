import requests
import json

cep = input('CEP: ')
try:
  link = 'https://viacep.com.br/ws/%s/json' % cep
  requisicao = requests.get(link)
  ret = json.loads(requisicao.text)
except Exception as erro:
  print('Erro: ' + erro)
  exit()

print('CEP: %s' % ret['cep'])
print('Logradouro: %s' % ret['logradouro'])
print('Bairro: %s' % ret['bairro'])
print('Municipio: %s' % ret['localidade'])
print('UF: %s' % ret['uf'])
