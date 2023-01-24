#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void)
{
    float v0, a, x, vEnd;
    printf("Anfangsgeschwindigkeit v 0 (Eingabe in km/h) :\n");
    scanf("%f", &v0);
    printf("beschleunigt mit der konstanten Beschleunigung a (Eingabe in m/s 2 ): \n");
    scanf("%f", &a);
    printf("Strecke x (Eingabe in m)\n");
    scanf("%f", &x);

    vEnd = 3.6 * sqrt((v0 / 3.6) * (v0 / 3.6) + 2 * a * x);
    printf("Endgeschwindigkeit v end berechnet und in der Dimension [km/h]: %.2f\n", vEnd);

    system("pause");
}