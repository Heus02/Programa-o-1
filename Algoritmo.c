#include <stdio.h>

int mdc (int a,  int b)
{
    if (b == 0)
    {
        return a;
    }
    else 
    {
        return mdc (b, a % b);
    }

}
void verificar (int n, int i)
{
    if (i < n)
    {
        int a, b;
        scanf ("%d %d", &a, &b);
        printf ("MDC(%d,%d) = %d\n", a, b, mdc (a, b));
        verificar (n, i + 1);
    }
}
int main ()
{
    int n;
    scanf ("%d", &n);
    verificar (n, 0);

    return 0;
}