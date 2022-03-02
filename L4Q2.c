#include<stdio.h>

void ler_matriz(int n, int m, int notas[][m])
{
    int i, j;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            // printf(">>>> i = %d, j = %d\n", i, j);
            scanf("%d", &notas[i][j]);
        }
    }    
}
/*
void imprimir_linha(int i, int j, int m, float notas[][m])
{
    if (j < m)
    {
        char c = (j == m - 1) ? '\n' : '\t';

        printf("%f%c", notas[i][j], c);

        /*if (j == m - 1)
        {
            printf("%f\n", notas[i][j]);
        }
        else
        {
            printf("%f\t", notas[i][j]);
        }
        
        imprimir_linha(i, j + 1, m, notas);
    }
} */

void imprimir_matriz(int n, int m, int matriz1[][m], int matriz2[][m])
{
    int j, i;
    /*if (i < n)
    {
        imprimir_linha(i, 0, m, notas);

        imprimir_matriz(i + 1, n, m, notas);
    } */

    for (i = 0; i < n; i ++)
    {
        for (j = 0; j < m; j ++)
        {
            printf("%d\n", matriz1[i][j]+matriz2[i][j]);
        }
    }
}

int main()
{
    int n;
    scanf ("%d", &n);
    
    if (n == 0)
    {
        printf ("Vazia\n");
    }
    else
    {
        int matriz1[n][n];
        int matriz2[n][n];
    
        ler_matriz(n, n, matriz1);
        
        ler_matriz(n, n, matriz2);
        
        imprimir_matriz(n, n, matriz1, matriz2);
    }
    
    

    return 0;
}