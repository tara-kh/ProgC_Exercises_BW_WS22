#include <stdio.h>
int main()
{

    double Zahl, Mul = 1;
    int Potentz = 0;
    int i, n;

    printf("Geben Sie die ganze Zahl ein:");
    scanf("%lf", &Zahl);
    printf("Geben Sie Potentz ein:");
    scanf("%d", &Potentz);
    if (Potentz < 0)
    {
        n = Potentz * (-1);
    }
    else
    {
        n = Potentz;
    }
    printf("%d\n", n);
    for (i = 1; i <= n; i++)
    {
        Mul = Mul * Zahl;
    }
    if (Potentz < 0)
    {

        Mul = 1 / Mul;
    }
    printf("Result = %lf", Mul);

    return 0;
}