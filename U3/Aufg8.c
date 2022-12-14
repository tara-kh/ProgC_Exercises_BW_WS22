#include <stdio.h>
int main()
{

    int max, i, summe;

    printf("Gib  positive ganze Zahl ein :\n");
    scanf("%d", &max);

    if (max > 0)
    {
        int summe = 0;
        for (i = 0; i <= max; i = i + 1)
        {
            if (i % 2 == 1)
            {
                summe = summe + i;
            }
        }
        printf("die Summe ist %d\n", summe);
    }
    else
    {
        printf("Unzulaessige Eingabe!\n");
    }
    return 0;
}