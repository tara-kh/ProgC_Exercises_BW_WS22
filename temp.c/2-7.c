#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int sekunden, x;
    int ss, mm, hh, tt, ww;
    int again;
    do
    {
        do

        {
            printf("Geben Sie einen eingelesenen ganzzahligen, nichtnegativen Sekundenbetrag ein:\n");
            scanf("%d", &sekunden);
            if (sekunden < 0)
            {
                printf("nochmal\n");
                scanf("%d", &sekunden);
            }

        } while (sekunden < 0);

        ss = sekunden % 60; // sekunden
        x = sekunden / 60;  // restliche Minuten
        mm = x % 60;        // minuten
        x = x / 60;         // restliche Stunden
        hh = x % 24;        // Stunden
        x = x / 24;         // restliche Tage
        tt = x % 7;         // Tage
        ww = x / 7;         // Wochen

        printf("das sind %d woche", ww);
        if (ww > 1)
        {
            printf("n");
        }
        printf(", %d Tag", tt);
        if (tt > 1)
        {
            printf("e");
        }
        printf(" %d:%02d:%02d Stundens \n", hh, mm, ss);
        printf("möchten Sie nochmal ein Sekundenwert umwandeln?   YES)press 1     NO)press 0\n");
        scanf("%d", &again);
    } while (again == 1);
    system("PAUSE");
}