deslocamento = float(input("Informe a variação de deslocamento do objeto em metros (m): "))
var_tempo = float(input("Informe a variação de tempo do movimento em segundos (s): "))

vel_med = deslocamento/var_tempo

print(f"Velocidade média = {vel_med:.2f} m/s")