total = 0
while True:
    codigo = int(input("Digite o código do produto: "))
    quantidade = float(input("Digite a quantidade comprada: "))

    soma = 0
    match codigo:
        case 1:
            soma = 0.5 * quantidade
        case 2:
            soma = 1 * quantidade
        case 3:
            soma = 4 * quantidade
        case 5:
            soma = 7 * quantidade
        case 9:
            soma = 8 * quantidade
        case _:
            print("Código inválido")
            continue

    total += soma

    continua_programa = int(input("Digite 1 para continuar ou 0 caso já tenha finalizado a compra: "))

    if continua_programa == 0:
        print(f"Total = R$ {total}")
        break