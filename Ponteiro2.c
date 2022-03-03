#include <stdio.h>

int main ()
{
    int x = 10;
    double y = 20.50;
    char z = 'a';

    int *ponteiroX = &x;
    double *ponteiroY = &y;
    char *ponteiroZ = &z;

    printf ("Endereço x = %d. Valor de x = %d\n", ponteiroX, *ponteiroX);
    printf ("Endereço y = %d. Valor de y = %lf\n", ponteiroY, *ponteiroY);
    printf ("Endereço z = %d. Valor de z = %c\n", ponteiroZ, *ponteiroZ);

    double soma = *ponteiroX + *ponteiroY;

    printf ("Soma de x + y = %lf\n", soma);

    int *resultado ;
    resultado = &x;

    printf ("Valor de x: %d\n", *resultado);



    return 0;

}