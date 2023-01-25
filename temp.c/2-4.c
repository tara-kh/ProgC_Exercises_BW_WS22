#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    double x;
    double lnx = 0;
    double eps;
    int i = 1;
    double summand = 1;
    double zaehler;
    int operator= 1;

    do
    {
        printf("gib x in der Basis 0 < x <= 2 ein: \n");
        scanf("%lf", &x);
    } while (x < 0 || x >= 2);

    do
    {
        printf("Genauigkeitsschranke eps mit eps > 0:  ");
        scanf("%lf", &eps);
    } while (eps <= 0);

    for (i = 1; summand >= eps; i++)
    {
        zaehler = x - 1;
        summand = operator*((summand * zaehler) / i);
        printf("summand: %f", summand);
        lnx = lnx + summand;
        operator= - operator;
    }
    printf("ln(%f) = %f in %d. Summanden.\n\n ", x, lnx, i);

    system("PAUSE");
}
