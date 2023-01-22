/* Datei aufg1-1.c */
/* Berechnung der Summe zweier Zahlen */

#include <stdlib.h>
#include <stdio.h>
// #define M_PI 3.14159265358979323846 printf("h?"\n);
#include "mathkonst.h"

int main(void)
{
    const float pi = M_PI;
    float h, r, V;

    printf("h?\n");
    scanf("%f", &h);
    printf("r?\n");
    scanf("%f", &r);

    V = pi * r * r * h;
    printf("Volumes = %.6f\n", V);
    system("pause");
}