"""9. Construa um programa que solicite que o usuário informe 2 
números inteiros positivos. O programa deve calcular:
 a) O cubo do segundo número
 b) A média geométrica entre o primeiro e o segundo nú
mero, isto é, Media geo = sqrt(num1*num2)"""

from math import sqrt

num1 = int(input("Informe um número inteiro: "))
num2 = int(input("Informe um segundo número inteiro: "))

print(f"Valor cúbico do segundo número = {pow(num2, 3)}")

print(f"Média geométrica dos dois números = {sqrt(num1*num2)}")
