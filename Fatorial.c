#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int fatorial (int n)
{
    if (n == 0 || n == -1)
    {
        return 1;  
    }
    else 
    {
        return n *  fatorial (n-1);  
    }
}

void verificacao ()
{
    int n;
    scanf ("%d", &n);
    if (n == -1)
    {
        return;
    }
    printf ("%d\n", fatorial(n));
    verificacao ();
  
}
int main() 
{
    verificacao ();
	return 0;
}