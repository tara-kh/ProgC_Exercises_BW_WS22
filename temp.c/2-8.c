#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int max, i, summe;
    int again;
    do
    {
        printf("Gib positive ganze Zahl ein:\n");
        scanf("%d", &max);

        if (max > 0)
        {
            summe = 0;
            for (i = 0; i <= max; i++)
            {
                if (i % 2 == 1)
                {
                    summe = summe + i;
                }
            }
            printf("das Ergebnis ist = %d\n", summe);
        }

        else
        {

            printf("Unzulaessige Eingabe!\n");
        }
        printf("nochmal probieren?         YES)enter 1     NO)enter 0      \n");
        scanf("%d", &again);
    } while (again == 1);
    system("PAUSE");
}