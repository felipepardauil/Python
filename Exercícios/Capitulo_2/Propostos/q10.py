copo1 = "laranja"
copo2 = "acerola"

print("Antes da troca:")
print(f"Copo1: {copo1}, copo2: {copo2}")

"""Permutação trocando os valores das variáveis ao mesmo tempo
durante a execução do código"""

copo1, copo2 = copo2, copo1 
# em python a permuta de valores é possível mesmo sem a presença de variavel auxiliar

print("Depois da troca: ")
print(f"Copo1: {copo1}, copo2: {copo2}")
