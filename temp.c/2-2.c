#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    double b, erg = 1;
    int e;
    int i = 0;

    printf("basis?\n");
    scanf("%lf", &b);

    printf("exponent?\n");
    scanf("%d", &e);

    for (i = 0; i < abs(e); i++)
    {
        erg = erg * b;
    }
    if (e < 0)
    {
        erg = 1 / erg;
    }
    printf("\n%f hoch %d ist %f\n\n", b, e, erg);
    system("PAUSE");
}