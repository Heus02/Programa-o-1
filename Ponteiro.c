#include <stdio.h>

int main (void) 
{
    int x;
    x = 10;

    int *ponteiro; 
    ponteiro = &x;
    printf ("%d \n", *ponteiro); //10


    int y = 20;
    *ponteiro = y;

    printf ("%x\n", &x); //endereço
    printf ("%d \n", *ponteiro); //20
    printf ("%d %d\n", x, y); //20 20



    getchar ();

    return 0;
}