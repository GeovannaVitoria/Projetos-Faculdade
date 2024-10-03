def lista_com_while():
    lista = [3, 8, 'b']
    print(f"Lista inteira: {lista}")
    i = 0
    while i < len(lista):
        print(lista[i])
        i += 1

def lista_com_for():
    lista = [3, 8, 'b']

    for x in lista:
        print(x)

def lista_com_indexacao_negativa():
    lista = ["laranja", "azul", "verde"]
    # Indexação que começa pelo final
    print(lista[-2])

def lista_com_especificacao():
    lista = ["laranja", "azul", "verde", "preto"]
    # Indica início (posição 1) e fim (posição 3)
    print(lista[1:3]) 

def lista_alterando_valores():
    lista = ["laranja", "azul", "verde", "preto"]
    lista[0] = "rosa"
    print(lista)

def lista_range_negativo_especifico():
    lista = ["laranja", "azul", "verde", "preto"]
    print(lista[-1:5])

def lista_alterando_valores_especifico():
    lista = ["laranja", "azul", "verde", "preto"]

    for i in range(len(lista)):
        lista[i] = 1 + i

    print(lista)

# Chamando a função
lista_alterando_valores_especifico()