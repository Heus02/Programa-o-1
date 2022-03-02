#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int verificadora (char str [], int tam, int aux, int contador)
{
    if (aux < tam)
    {
        if (str[aux] == ' ')
        {
            
            contador++;
        }
        
        return verificadora (str, tam, aux + 1, contador);
    }
    else 
    {
        return contador + 1;
    }
}

void loop (int n, int aux, int quantidade, double total)
{
    double preco;
    char str[1000];
    int tam, res;
    if (aux <= n)
    {
        scanf ("%lf\n%[^\n]s", &preco, str);
        
        tam = strlen (str);
        
        total += preco;
        
        res = verificadora (str, tam, 0, 0);
        
        quantidade += res;
        
        printf ("dia %d: %d kg\n", aux, res);
        loop (n, aux + 1, quantidade, total);
    }
    else
    {
        double ppd, kgpd;
        
        ppd = total/n *(1.0);
        kgpd = quantidade*(1.0)/n*(1.0);
        
        printf ("%.2lf kg por dia\nR$ %.2lf por dia\n", kgpd, ppd);
        
    }
}

int main() 
{
    int n;
    
    scanf ("%d", &n);
    
    loop (n, 1, 0, 0);
	return 0;
}