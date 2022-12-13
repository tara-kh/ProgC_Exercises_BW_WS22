#include <stdio.h>
int main()
{

    double x, f = 1;
    double Summand = 1;
    int i = 1;
    double Mul = 1;
    int Operator = 1;
    double lnX = 0;

    do
    {
        printf("0 < x <= 2 eingeben:\n");
        scanf("%lf", &x);

    } while (x < 0 || x > 2);

    for (i = 1; lnX <= 0.00001; i++)
    {

        f = f * (x - 1);
        Summand = (1 / i) * f * Operator;
        lnX = lnX + Summand;
        Operator = -Operator;
        printf("%f\n", lnX);
    }
    printf("%lf", lnX);

    return 0;
}
// the Result is wrong !!