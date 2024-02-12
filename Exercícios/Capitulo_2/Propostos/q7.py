''' 7. Uma imobiliária paga aos seus corretores um salário base 
de R$ 1.500,00. Além disso, uma comissão de R$ 200,00 por 
cada imóvel vendido e 5% do valor de cada venda. Construa 
um programa que solicite o nome do corretor, a quantidade 
de imóveis vendidos e o valor total de suas vendas. Ao fim, o 
programa deve calcular e escrever o salário final do corretor de 
imóveis.'''

sal_base = 1500.00
cpi = 200.00 # Comissão por Imóvel

nome = input("Informe o nome do corretor: ")
imoveis_vend = int(input("Quantidade de imóveis vendidos = "))
vendas_total = float(input("Valor total de vendas (R$) = "))

sal_total = sal_base + (imoveis_vend*cpi) + (vendas_total*0.05)

print(f"Corretor: {nome}", "\n", f"Salário total = {sal_total}")