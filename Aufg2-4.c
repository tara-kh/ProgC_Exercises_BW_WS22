#include <stdio.h>

int main()
{
    double y, z;
    double Einkommen, Steuer;
    int x, iSteuer;

    printf("Wie hoch ist das zu versteuernde Einkommen in Euro?\n");
    scanf("%lf", &Einkommen);

    x = (int)Einkommen;
    printf("Einkommen gerundet: %d Euro\n", x);

    if (x <= 7664)
    {
        Steuer = 0;
    }
    else if (x <= 12739)
    {
        y = (x - 7664) / 10000.;
        Steuer = (883.74 * y + 1500) * y;
    }
    else if (x <= 52151)
    {
        z = (x - 12739) / 10000.;
        Steuer = (228.74 * z + 2397) * z + 989;
    }
    else if (x <= 250000)
    {
        Steuer = 0.42 * x - 7914;
    }

    else
    {
        Steuer = 0, 45 * x - 15414;
    }
    iSteuer = (int)Steuer;
    printf(" Einkommen = %.0lf€ ----> Steuer = %d€ \n ", Einkommen, iSteuer);
    return 0;
}
