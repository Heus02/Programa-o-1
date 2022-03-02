#include <stdio.h>

void ler_matriz (int n, int m, int matriz[][m])
{
    int i, j;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf ("%d", &matriz[i][j]);
        }
    }
}

void apuracao (int n, int m, int matriz[][m])
{
    int i, j;


    for (j = 0; j < m; j++)
    {
        int res = 0;
        for (i = 0; i < n; i++)
        {
            res += matriz[i][j];
        }
        
        printf ("Princesa %d: %d voto(s)\n", j+1, res);

            
    }
}
int main ()
{
    int n, m;

    scanf ("%d\n%d", &m, &n);


    int matriz [n][m];

    ler_matriz (n, m, matriz);

    apuracao (n, m, matriz);
    return 0;
}