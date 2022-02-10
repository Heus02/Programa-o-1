#include <stdio.h>
#include <stdlib.h>

void vaqueiro (int n, int direcao, int direita, int cima, int contador, char movimento_final)
{
    if (n == 0)
    {
        printf ("%d\n", contador);
    }
    else
    {
        char movimento_atual;
        
        scanf (" %c", &movimento_atual);

        if (direcao == 'D')
        {
            direita += 1;
        }
        else if (cima == 'C')
        {
            cima += 1;
        }

        if (direita != cima && abs (direita - cima) == 1)
        {
            if (movimento_atual == movimento_final)
            {
                if (((cima > direita) && (movimento_atual == 'C')) || (((direita > cima) && (movimento_atual == 'D')))
                {
                    vaqueiro (n - 1, contador + 1, direita, cima, movimento_final);
                }
                else 
                {
                    movimento_final = movimento_atual;
                    vaqueiro (n - 1, contador, direita, cima, movimento_final);

                }

            }
            else 
            {
                movimento_final = movimento_atual;
                vaqueiro (n - 1, contador, direita, cima, movimento_final);
            }
            

        }
        else if (direita == cima || ((direita != cima) && abs (valor_x - valor_y) != 1))
        {
            movimento_final = movimento_atual;
            vaqueiro (n - 1, contador, direita, cima, movimento_final);
        }

    }

}

int main ()
{
    int n, direcao, contador = 0, direita = 0, cima = 0;
    char movimento_final;

    scanf ("%d\n", &n);

    vaqueiro (n, direcao, direita, cima, contador, movimento_final);

    return 0;

}