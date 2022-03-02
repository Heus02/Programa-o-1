#include <stdio.h>
#include <math.h>
void ler_matriz (int n, int m, int matriz[][m])
{
    int i, j, aux = 1;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            matriz[i][j] = aux;
            aux ++;
            
        }
    }
}
void imprimir_matriz (int n, int m, int matriz[][m], int l)
{
    int i, j;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (matriz[i][j] > l)
            {
                break;
            }
            if (j == 0)
            {
                printf ("%d", matriz[i][j]);
            }
            else
            {
                printf (" %d", matriz[i][j]);
            }
            
        }
        
        printf ("\n");
        
        
    }
}
int main ()
{
    int n, m, l;

    scanf ("%d %d", &m, &n);
    
    l = n;

    n = ceil(n *(1.0)/ m*(1.0));

    int matriz [n][m];

    ler_matriz (n, m, matriz);

    imprimir_matriz (n, m, matriz, l);



    return 0;
}