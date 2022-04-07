#include <stdio.h>
#include <stdlib.h>

int busca_binaria (int array [], int tam, int elemento, int inicio, int fim, int metade)
{
    metade = (inicio + fim) / 2;
    if (inicio > fim)
    {
        return -1;
    }
    if (array[metade] == elemento)  
    {
        return metade;
    }
    if (array[metade] < elemento)
    {
        inicio = metade + 1;
        return busca_binaria (array, tam, elemento, inicio, fim, metade);

    }
    else 
    {
        fim = metade - 1;
        return busca_binaria (array, tam, elemento, inicio, fim, metade);

    }
       

    }

int main ()
{
    int array [5] = {0, 13, 19, 33, 43};
    int tam = 5;
    int elemento = 4;
    int inicio = 0, fim = tam -1;
    int res= busca_binaria(array, tam, elemento, inicio, fim, 0);

    if ( res!= -1)
    {
        printf ("O número foi encontrado na posição %d\n", res);
    }
    else
    {
        printf ("Número não encontrado!\n");
    }


    return 0;
}