#include <stdio.h>
int main()
{
    int n;
    int i, j, k;
    int arr[20];
    int again;

    do
    {
        do
        {
            if (n > 20)
            {
                printf("Das muss weniger als 20 Zahlen sein, gib wieder ein :\n");
            }
            printf("Wie viel Zahlen in einer Folge(maximal 20!)?\n");
            scanf("%d", &n);
        } while (n > 20);

        printf("Zahl?\n");

        for (i = 0; i < n; i++)
        {
            printf("#%d  ", i);
            scanf("%d", &arr[i]);
        }
        for (i = 0; i < n; i++)
        {
            printf("%d     ", arr[i]);
        }
        printf("\n");

        do
        {
            int arrSum[20];

            n--;
            for (i = 0; i < n; i++)
            {

                arrSum[i] = arr[i] + arr[i + 1];
                printf("%d    ", arrSum[i]);
            }

            for (i = 0; i < n; i++)
            {
                arr[i] = arrSum[i];
            }

            printf("\n");
        } while (n > 1);

        printf("Für mehrere Zahlendreiecke:     Yes:press 1     No:press 0\n");
        scanf("%d", &again);

    } while (again == 1);

    return 0;
}