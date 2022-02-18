#Exercício 5.15

total = float (0)

while True:
    código = int (input ("Digite o código do produto: "))
    if código == 0:
        print (f"R$ {total}")
        break
    quantidade = int(input ("Digite a quantidade comprada: "))

    if código == 1:
        total = total + quantidade * 0.50
    elif código == 2:
        total = total + quantidade * 1.00
    elif código == 3:
        total = total + quantidade * 4.00
    elif código == 5:
        total = total + quantidade * 7.00
    elif código == 9:
        total = total + quantidade * 8.00
    else:
        print ("Código inválido")


        
        
