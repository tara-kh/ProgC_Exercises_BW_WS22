#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    float h, s, vMaxMs, vMaxKmh;
    const float g = 9.81;

    printf("height?\n");
    scanf("%f", &h);

    s = sqrt((2 * h) / g);
    vMaxMs = sqrt(2 * g * h);
    vMaxKmh = 3.6 * vMaxMs;

    printf("Fallzeit= %.3f\n", s);
    printf("Endge-schwindigkeit (m/s)= %.3f\n", vMaxMs);
    printf("Endge-schwindigkeit (km/h)= %.3f\n", vMaxKmh);

    system("pause");
}