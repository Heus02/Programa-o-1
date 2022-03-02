#include<stdio.h>

void ler_matriz(int n, int m, int matriz[][m])
{
    int i, j;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }    
}

void imprimir_matriz(int n, int m, int matriz1[][m], double media, int maior)
{
    int j, i, delta, res;

    for (i = 0; i < n; i ++)
    {
        for (j = 0; j < m; j ++)
        {
            media += matriz1[i][j];
            
            if (matriz1[i][j] >= maior)
            {
                maior = matriz1[i][j];
            }
            
            
        }
    }
    
    if (maior > 0)
    {
        delta = 1;
    }
    else if (maior < 0)
    {
        delta = -1;
    }
    else if (maior == 0)
    {
        delta = 0;
    }
    
    res = matriz1[0][0] + matriz1[1][1] + matriz1[2][2];
    
    printf ("%.2lf %d %d %d", media/9.0, maior, delta, res);
}

int main()
{
   
    int matriz1[3][3] = {0};
    
    ler_matriz(3, 3, matriz1);
        
        
    imprimir_matriz(3, 3, matriz1, 0, -1000);
    
    

    return 0;
}