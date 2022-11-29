#include <stdio.h>
#include <math.h>

int main()
{
    double s, h, v0, a, x, vEnd;

    printf("Geben Sie die Anfangsgeschwindigkeit ein:\n");
    scanf("%lf", &v0);
    printf("Geben Sie die Beschleunigung ein:\n");
    scanf("%lf", &a);
    printf("Geben Sie die Strecke ein:\n");
    scanf("%lf", &x);

    vEnd = 3.6 * sqrt(pow((v0 / 3.6), 2) + (2 * a * x));

    printf("Endgeschwindigkeit ist %.2lf", vEnd);

    return 0;
}