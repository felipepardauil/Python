# """ ESTRUTURA CONDICIONAIS """

# """ Python é uma liguagem de execução sequencial, ou seja, as linhas de código
# são executadas uma após a outra na ordem em que foram inceridas"""

# nota1 = float(input("Nota 1: "))
# nota2 = float(input("Nota 2: "))

# media = (nota1 + nota2) / 2

# if media >= 60:  # elif = else if do c++
#     print("Approved")
# else:
#     print("Not approved")


cond = input("O cliente está negativado? ")

if cond == "sim" or "Sim":
    print("Não é possível realizar o empréstimo.")
elif cond == "não" or "Não" or "nao" or "Nao":
    print("É possível realizar o empréstimo.")


""" OPERADORES DE COMPARAÇÃO """
"""
igual == (resulta em false)
diferente != (resulta em true)
maior que > (resulta em true)
menor que < (resulta em false)
maior ou igual >= (resulta em true)
menor ou igual <= (resulta em false)
"""

"""OPERADORES LÓGICOS"""
"""
and (x and y)
or (x or y)
not (not x)
"""
