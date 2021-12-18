
#Linguagem Python
a = int (input ("Digite o a: "))
m = int (input ("Digite o módulo de a (m): "))

def encontrar_mod_inv(a,m):

    for x in range(1,m):
        if((a%m)*(x%m) % m==1):
            return x
    raise Exception('O módulo inverso não existe.')



try:
    res=encontrar_mod_inv(a,m)
    print("O módulo inverso é: "+ str(res))

except:
    print('O módulo inverso não existe.')
