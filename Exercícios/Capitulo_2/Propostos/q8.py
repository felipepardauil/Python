""" 8. Construa um programa que receba do usuário o valor do 
salário mínimo atual. Na sequência, o programa deve solicitar 
que o usuário informe o valor do seu salário mensal. Ao fim, o 
programa deve calcular a quantidade de salários mínimos re
cebidos pelo usuário. """

sal_min = float(input("Salário mínimo atual = "))
sal_mensal = float(input("Salário mensal = "))

print(f"Você recebe {sal_mensal//sal_min} salário(s) mínimo(s) ao mês")