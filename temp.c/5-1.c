#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    int zahl;
    int arr[zahl];
    int i = 0;
    int smallest = arr[0];
    int biggest = arr[0];
    int stop = 0;
    do
    {
        printf("Wie viel Zahl ?\n");
        scanf("%d", &zahl);
        for (i = 0; i < zahl; i++)
        {
            printf("#%d   ", i + 1);
            scanf("%d", &arr[i]);
            if (smallest >= arr[i])
            {
                smallest = arr[i];
            }
            if (biggest <= arr[i])
            {
                biggest = arr[i];
            }
        }
        printf("kleinste Zahl: %d\n", smallest);
        printf("biggest Number: %d\n", biggest);

        for (i = zahl; i >= 0; i--)
        {
            printf("%d    ", arr[i]);
            if (i % 5 == 0)
            {
                printf("\n");
            }
        }
        printf("Möchten Sie wiederholen?      YES: press 1     NO: press 0\n");
        scanf("%d", &stop);
    } while (stop == 1);

    return 0;
}
