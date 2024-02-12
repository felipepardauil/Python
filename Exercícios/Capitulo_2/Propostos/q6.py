from math import sqrt

# a*pow(x, 2) + b*x + c = 0

""" Constantes """
a = int(input("Valor de a = "))
b = int(input("Valor de b = "))
c = int(input("Valor de c = "))

delta = pow(b, 2) - (4 * a * c)
""" Se delta > 0, então há x1 e x2
    Se delta = 0, então há apenas x1
    Se delta < 0, então não há raizes reais"""

if delta < 0:
    print("Não há raizes reais.")

elif delta > 0:
    x1 = (-b + sqrt(delta)) // (2 * a)
    x2 = (-b - sqrt(delta)) // (2 * a)

    print("Possui duas raízes reais: ")
    print(f"x1 = {x1}", f"x2 = {x2}")

else:  # delta == 0
    x = (-b + sqrt(delta)) // (2 * a)
    
    print("Possui apenas uma raíz real: ")
    print(f"x = {x}")
