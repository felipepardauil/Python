''' 4. Implemente um programa que converta o valor de uma ve
locidade média em km/h para m/s. Para isso, o usuário deve 
informar o valor da velocidade média. Sabe-se que o fator utili
zado para essa conversão é 3,6.'''
# km/h -> m/s divide-se o valor em km/h por 3,6
# m/s -> m/s multiplica-se o valor em km/h por 3,6

vel_med = float(input("Velocidade média (km/h) = "))
print(f"Velocidade média (m/s) = {vel_med/3.6} m/s")