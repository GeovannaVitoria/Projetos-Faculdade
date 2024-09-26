deposito_inicial = float(input("Digite o depósito inicial: "))
taxa_juros = float(input(f"Digite a taxa de juros ao mês: "))

total_final = 0

for i in range(1, 25):
    juros = deposito_inicial * (taxa_juros/100)

    deposito_inicial += juros

    total_final += juros

    print(f"Mês {i} = {deposito_inicial:.2f}")

print(f"O total ganho nesse período é de: R$ {total_final:.2f}")