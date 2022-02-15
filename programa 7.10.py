#Jogo da velha

from random import randint

print ("Bem-vindos ao jogo mais antigo de todos os tempos")
print ("O JOGO DA VELHA".center(55))
print ("Jogador 1 começa com X")
print ("Jogador 2 começa com O\n")


jogo = list(range(0, 9))
x = 1



while x <= 9:
    print (f"Rodada {x}")
    print (f"{jogo[0:3]}\n{jogo[3:6]}\n{jogo[6:9]}\n")

    jogador_1 = int(input("Jogador 1 - Digite a posição onde você quer jogar: "))
    if jogo [jogador_1] == "X" or jogo [jogador_1] == "O":
        
        while jogo [jogador_1] == "X" or jogo [jogador_1] == "O":
            jogador_1 = int(input("Escolha outra posição\nJogador 1 - Digite a posição onde você quer jogar: "))
         
    else:
        jogo [jogador_1] = "X"

    jogador_2 = int(input("Jogador 2 - Digite a posição onde você quer jogar: "))
    if jogo [jogador_2] == "X" or jogo [jogador_2] == "O":

        if x < 9:

            while jogo [jogador_2] == "X" or jogo [jogador_2] == "O":

                jogador_2 = int(input("Escolha outra posição\nJogador 2 - Digite a posição onde você quer jogar: ")) 

    else:
        jogo [jogador_2] = "O"

    if (jogo [0] == "X" and jogo [3] == "X" and jogo [6] == "X") or (jogo [0] == "X" and jogo [4] == "X" and jogo [8] == "X") or (jogo [0] == "X" and jogo [1] == "X" and jogo [2] == "X") or (jogo [1] == "X" and jogo [4] == "X" and jogo [7] == "X") or (jogo [2] == "X" and jogo [5] == "X" and jogo [8] == "X") or (jogo [2] == "X" and jogo [4] == "X" and jogo [6] == "X") or (jogo [3] == "X" and jogo [4] == "X" and jogo [5] == "X") or (jogo [6] == "X" and jogo [7] == "X" and jogo [8] == "X"):
        print ("Jogador 1 venceu!")
        break
    elif (jogo [0] == "O" and jogo [3] == "O" and jogo [6] == "O") or (jogo [0] == "O" and jogo [4] == "O" and jogo [8] == "O") or (jogo [0] == "O" and jogo [1] == "O" and jogo [2] == "O") or (jogo [1] == "O" and jogo [4] == "O" and jogo [7] == "O") or (jogo [2] == "O" and jogo [5] == "O" and jogo [8] == "O") or (jogo [2] == "O" and jogo [4] == "O" and jogo [6] == "O") or (jogo [3] == "O" and jogo [4] == "O" and jogo [5] == "O") or (jogo [6] == "O" and jogo [7] == "O" and jogo [8] == "O"):
        print ("Jogador 2 venceu!")
        break
    else:
        if x == 9:
            print ("Velha")
            break
        

    x += 1

    
        
    
    
   

    


    
    







