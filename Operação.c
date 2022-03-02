#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void ler_matriz (int n, int m, double matriz[][m])
{
    int i, j;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf ("%lf", &matriz[i][j]);
            
            if (matriz[i][0] == -1)
            {
                return;
            }
            
        }
    }
}

void imprimir_matriz (int n, int m, double matriz[][m])
{
    int i, j;
    double credito = 0, debito = 0, total = 0;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (matriz[i][0] == 1)
            {
                credito += matriz [i][j+1];
            }
            else if (matriz[i][0] == 0)
            {
                debito += matriz [i][j+1];
            }
            
        }
    }
    
    total = credito - debito;
    printf ("Creditos: R$ %.2lf\n", credito);
    printf ("Debitos: R$ %.2lf\n", debito);
    printf ("Saldo: R$ %.2lf\n", total);
    
}

int main() {
    
    double matriz [100][1];
    
    ler_matriz (100, 2, matriz);
    
    imprimir_matriz (100, 1, matriz);
	return 0;
}