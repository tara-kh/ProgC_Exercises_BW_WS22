/* Datei aufg1-1.c */
/* Berechnung der Summe zweier Zahlen */

#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    unsigned int summe, a, b;

    printf("Geben Sie die erste Num ein:\n");
    scanf("%d", &a);

    printf("Geben Sie die zweite Num ein:\n");
    scanf("%d", &b);

    /* Berechnung */
    summe = a + b;

    /* Ausgabe des Ergebnisses */
    printf("%d\n", summe);
    system("pause");
}
