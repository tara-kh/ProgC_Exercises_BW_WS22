/* Aufgabe 4-1a
   Funktion für sinus hyperbolicus */

#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "Diverses.h"

double sinhyp(double x)
{
    return (exp(x) - exp(-x)) / 2;
}

int main(void)
{
    double a, b, h, x;
    int r, i = 0;

    do
    {
        printf("Gib Tabellenanfang ein:       ");
        r = scanf("%lf", &a);

    } while (r < 1);
    do
    {
        printf("Gib Tabellenende ein ( >= a): ");
        r = scanf("%lf", &b);

    } while (r < 1 || b < a);
    do
    {
        printf("Gib Schrittweite ein ( > 0):  ");
        r = scanf("%lf", &h);

    } while (r < 1 || h <= 0);

    do
    {
        x = a + i * h;
        printf("\n%f  %f", x, sinhyp(x));
        i = i + 1;
    } while (x < b - h / 2);

    printf("\n");
    system(PAUSE);
}
