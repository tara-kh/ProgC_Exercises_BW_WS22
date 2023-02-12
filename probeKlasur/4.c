#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    int feld[10];
    int zahl, i;
    printf("Geben Sie mindestens zwei und maximal zehn Zahlen in ein Feld:\n");
    printf("Wie viel Zahl möchten Sie eingeben?\n");
    scanf("%d", &zahl);

    while (zahl < 2 || zahl > 10)
    {

        printf("Bitte beachten Sie den Basis, Geben Sie wieder ein:\n");
        scanf("%d", &zahl);
    }
    for (i = 0; i < zahl; i++)
    {
        printf("#%d  ", i + 1);
        scanf("%d", &feld[i]);
    }
    printf("Anzahl der einzugebenden ganzen Zahlen (mit 2, max10): %d\n", zahl);
    for (i = 0; i < zahl; i++)
    {
        printf("%d ", feld[i]);
        if (i == zahl - 1)
        {
            break;
        }
        if (feld[i] > feld[i + 1])
        {
            printf("> ");
        }
        else
        {
            printf("<= ");
        }
    }

    return 0;
}
