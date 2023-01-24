/* aufg3-3.c */
/* Ausgabe einer Tabelle für einen Sparvertrag mit jaehrlicher Sparrate s
   mit festem Jahreszinssatz p über n Jahre */

#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int laufzeit, i;
    float sparrate, zinssatz, zinsen, guthaben;

    /* Eingabe der jaehrlichen Sparrate */
    printf("Gib die jaehrliche Sparrate ein: ");
    scanf("%f", &sparrate);
    while (sparrate <= 0)
    {
        printf("Die Sparrate muss positiv sein!");
        printf("\nGib die jaehrliche Sparrate ein: ");
        scanf("%f", &sparrate);
    }

    /* Eingabe des festen Jahreszinssatzes */
    printf("\nGib den Zinssatz in Prozent ein: ");
    scanf("%f", &zinssatz);
    while ((zinssatz <= 0) || (zinssatz >= 100))
    {
        printf("Der Zinssatz muss zwischen 0 und 100 Prozent liegen!");
        printf("\nGib den Zinssatz in Prozent ein: ");
        scanf("%f", &zinssatz);
    }

    /* Eingabe der Laufzeit in Jahren */
    printf("\nGib die Laufzeit in Jahren ein:  ");
    scanf("%d", &laufzeit);
    while (laufzeit <= 0)
    {
        printf("Die Laufzeit muss positiv sein!");
        printf("\nGib die Laufzeit in Jahren ein:  ");
        scanf("%d", &laufzeit);
    }

    /* Berechnung und Ausgabe der Tabelle */
    guthaben = 0;
    printf("\n\nJahr    Zinsen    Guthaben\n");
    printf("           am Jahresende\n\n");
    for (i = 1; i <= laufzeit; i = i + 1)
    {
        zinsen = (guthaben + sparrate) * zinssatz / 100.;
        guthaben = guthaben + sparrate + zinsen;
        printf("%4i  %8.2f  %10.2f\n", i, zinsen, guthaben);
    }
    printf("\n");

    system("PAUSE");
}
