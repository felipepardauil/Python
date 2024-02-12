""" 2. Agora o mesmo aluno precisa que você construa um progra
ma para calcular o comprimento de uma circunferência. Para 
isso, o aluno informará ao programa o raio da circunferência. 
Sabe-se que o comprimento é igual à 2*pi*raio"""

from math import pi

raio = float(input("Raio da circunferência: "))

''' A ordem do fatores não irá alterar o resultado do produto final '''

raio*=2 # dobra o valor do raio

comp = raio*pi #valor do raio já multiplicado por 2; porém, poderia também ser 2*(pi*raio) ou qualquer permuta entre os termos

print(f"Comprimento da circunferência = {comp:.2f} metros")
''' Importante lembrar de limitar as casas decimais após o ponto flutuante
quando se está trabalhando com números que possuem muitas casas decimais'''
