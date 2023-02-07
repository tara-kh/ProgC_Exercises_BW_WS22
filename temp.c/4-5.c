#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double funk1(double basis1, int expo1)
{
    int i;
    double mul = 1;
    for (i = 1; i <= expo1; i++)
    {
        mul = mul * basis1;
    }
    return mul;
}

double funk2(double basis2, int expo2)
{
    int result;
    if (expo2 == 0)
    {
        return 1;
    }
    else
    {
        return basis2 * funk2(basis2, expo2 - 1);
    }
}
int main(void)
{

    double basis;
    int expo;

    printf("einer beliebigen Kommazahl als Basis:\n");
    scanf("%lf", &basis);

    do
    {
        printf("einem nicht negativen, ganzzahligen Exponenten\n");
        scanf("%d", &expo);
        if (expo < 0)
        {
            printf("nicht erlaubt, wieder eingeben:\n");
            scanf("%d", &expo);
        }

    } while (expo < 0);

    printf("the result of the first funktion: %f\n", funk1(basis, expo));
    printf("the result of the second funktion: %f\n", funk2(basis, expo));

    return 0;
}