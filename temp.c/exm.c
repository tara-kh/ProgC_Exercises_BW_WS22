#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int zahl;
    int i;
    int arr[20];
    int arrSum[20];
    int stop = 0;

    do
    {
        do
        {
            if (zahl > 20)
            {
                printf("die Zahl muss weniger als 20 sein, nochmal eingeben:\n");
            }
            printf("Wie viel Zahl?\n");
            scanf("%d", &zahl);
        } while (zahl > 20);
        for (i = 0; i < zahl; i++)
        {
            printf("#%d  ", i + 1);
            scanf("%d", &arr[i]);
        }
        for (i = 0; i < zahl; i++)
        {
            printf("%d     ", arr[i]);
        }
        printf("\n");

        do
        {
            zahl--;
            for (i = 0; i < zahl; i++)
            {
                arrSum[i] = arr[i] + arr[i + 1];
                printf("%d    ", arrSum[i]);
            }
            printf("\n");
            for (i = 0; i < zahl; i++)
            {
                arr[i] = arrSum[i];
            }
        } while (zahl > 1);
        printf("Möchten Sie wiederholen?  YES: press 1    NO: press 0\n");
        scanf("%d", &stop);

    } while (stop != 0);
    return 0;
}
