#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void descriptografa (char *str, int tam, int aux, int contador)
{
    if (aux < tam)
    {
        if (str[aux] == '-')
        {
            printf ("%d", aux+1);
        }
        else if (str[aux] == '*')
        {
            printf ("(%d", aux+1);
            contador ++;
        }
        descriptografa (str, tam, ++aux, contador);
        
    }
    else
    {
        while (contador != 0)
        {
            printf (")");

            contador --;
        }
        
    }
}

int main ()
{
    char *str = malloc (100*sizeof(char));

    scanf ("%s", str);

    descriptografa (str, strlen(str), 0, 0);


    return 0;
}