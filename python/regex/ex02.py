import re

print (re.match(r'd{5}-d{3}','8aaf0-0dasdfasdf'))

print(re.match(r'\d{4}$', '1234'))
print(re.match(r'\d{4}$', '1234asdfasdfasdf'))
