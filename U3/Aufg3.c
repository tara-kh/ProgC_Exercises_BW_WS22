#include <stdio.h>
int main()
{

    int Laufzeit, i = 1;
    double Zinssatz;
    double Sparrate, sr;
    double total = 0;

    printf("Jahren ?\n");
    scanf("%d", &Laufzeit);
    printf("Sparrate ?\n");
    scanf("%lf", &Sparrate);
    printf("Zinssatz ?\n");
    scanf("%lf", &Zinssatz);

    for (i = 1; i <= Laufzeit; i++)
    {

        double ZinsRate = ((Sparrate + total) / 100) * Zinssatz;

        total = total + Sparrate + ZinsRate;

        printf("\n%d.Jahr:  ZinsRate: %.2f  total: %.2f\n", i, ZinsRate, total);
    }

    return 0;
}