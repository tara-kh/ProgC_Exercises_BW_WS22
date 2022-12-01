#include <stdio.h>

int main()
{

    double Menge, Preis1, Preis2, Preis3;
    double listePreis;
    printf("Wie viel Kg Getreide möchten Sie kaufen  ?\n");
    scanf("%lf", &Menge);

    if (Menge < 5000)
    {
        listePreis = 25.50;
        Preis1 = (Menge / 50) * listePreis;
    }
    else
    {

        listePreis = 25.50 - ((25.50 / 100) * 3);
        Preis1 = (Menge / 50) * listePreis;
    }

    if (Menge < 15000)
    {
        listePreis = 26.80;
        Preis2 = (Menge / 50) * listePreis;
        Preis2 = Preis2 - ((Preis2 / 100) * 3);
    }
    else
    {

        listePreis = 26.80 - ((26.80 / 100) * 5);
        Preis2 = (Menge / 50) * listePreis;
        Preis2 = Preis2 - ((Preis2 / 100) * 3);
    }
    if (Menge < 3000)
    {
        listePreis = 26.45;
        Preis3 = (Menge / 50) * listePreis;
        Preis3 = Preis3 - ((Preis3 / 100) * 2);
    }
    else
    {

        listePreis = 26.45 - ((26.45 / 100) * 3.5);
        Preis3 = (Menge / 50) * listePreis;
        Preis3 = Preis3 - ((Preis3 / 100) * 2);
    }
    printf("%.2lf Kg Preis1 = %.2lf€, Preis2 = %.2lf€, Preis3 = %.2lf€ \n", Menge, Preis1, Preis2, Preis3);

    return 0;
}
