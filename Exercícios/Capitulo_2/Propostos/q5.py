"""p1(x1,y1) - p2(x2,y2)"""

"""distância entre os pontos = sqrt(pow(x2-x1, 2)+pow(y2-y1, 2))"""
from math import sqrt

"""ponto p1"""
x1 = float(input("Coordenada X do ponto P1 = "))
y1 = float(input("Coordenada Y do ponto P1 = "))

"""ponto p2"""
x2 = float(input("Coordenada X do ponto P2 = "))
y2 = float(input("Coordenada Y do ponto P2 = "))


d = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2))  # d = distancia entre os pontos p1 e p2

print(f"Distância entre os pontos P1 e P2 = {d:.2f} u.c")  # u.c = unidades cartesianas
