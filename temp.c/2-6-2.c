/* aufg3-6.c */
/* Ausgabe der Zahlen zwischen 00 und 99, wobei
   die Zahlen durch ** ersetzt werden,
   die durch 7 teilbar sind UND Quersumme 7 haben. */

#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int x, quersumme;

    printf("\n");

    for (x = 0; x <= 99; x = x + 1)
    {
        quersumme = x % 10 + x / 10;
        if ((quersumme == 7) && (x % 7 == 0))
            printf("** ");
        else
            printf("%02u ", x);
        if ((x + 1) % 10 == 0)
            printf("\n");
    }
    printf("\n");
    system("PAUSE");
}