salário = float(input("Digite o seu salário: R$"))
aumento = float(input("Digite a porcentagem do aumento:"))

novoSalário = salário + (aumento * salário / 100)

print(f" O novo salário, com aumento de {aumento:5.2f}%, é R${novoSalário:5.2f}")
                 
