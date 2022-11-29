#include <stdio.h>
#include <math.h>

int main()
{
    double h, s, vMax, g = 9.81;
    printf("Geben sie der Turmhöhe ein:\n");
    scanf("%lf", &h);

    s = sqrt((2 * h) / g);
    vMax = sqrt(2 * g * h);

    printf("die Fallzeit ist %.3f\n", s);
    printf("die Endgeschwindigkeitkeit(m/s) ist%.3f\n", h);
    printf("die Endgeschwindigkeitkeit(km/h) ist%.3f\n", h * 3.6);
    return 0;
}