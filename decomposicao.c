#include <stdio.h>
#include <math.h>

int primo (int aux, int raiz_aux)
{
    if (raiz_aux == 1)
    {
        return 1;
    }
    else 
    {
        if (aux % raiz_aux == 0)
        {
            return 0;
        }
        else 
        {
            return primo (aux, raiz_aux - 1);
        }

    }
}

int achar_primo (int aux)
{
    if (primo (aux, sqrt (aux)) == 1)
    {
        return aux;
    }
    else 
    {
        return achar_primo (aux + 1);
    }

}

void decomposicao (int n, int aux, int y)
{
    int dividendo;
    
    dividendo = achar_primo (aux);


    if (aux <= n)
    {


        if (n % dividendo == 0)
        {
            printf ("%d\n", dividendo);

            y = n / dividendo;

            n = y;

            decomposicao (n, aux, y);

        }
        else
        {
            decomposicao (n, aux + 1, y);
        }
    }
}
int main ()
{
    int n, y;

    scanf ("%d", &n);

    decomposicao (n, 2, y);

    return 0;
}