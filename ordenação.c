#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int crescente (int a, int b, int c)
{
    if (a > b)
    {
        int aux = a;
        a = b;
        b = aux;
    }
    if (a > c)
    {
        int aux = a;
        a = c;
        c = aux;
    }
    if (b > c)
    {
        int aux = b;
        b = c;
        c = aux;
    }
    
    printf ("%d\n%d\n%d\n", a, b, c);
}

int main() 
{
    int a, b, c;
    
    scanf ("%d\n%d\n%d\n", &a, &b, &c);
    
    crescente (a, b, c);
	return 0;
}