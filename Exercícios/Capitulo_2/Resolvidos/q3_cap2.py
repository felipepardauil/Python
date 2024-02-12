from math import pi

r = float(input("Raio da área de convivência: "))

area = pi * pow(r, 2) # ou area = pi * (r**2); funciona sem () pois há prioridade
''' Porém, por uma questão de leitura, torna-se uma boa prática organizar a ordem
das operações numéricas que ocorrem no código.'''

print(f"Área = {area:.2f} metros quadrados")
''':.2f dita até quantas casas decimais devem ser exibidas após o ponto flutuante'''
