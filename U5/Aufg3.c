#include <stdio.h>
int main()
{
    int n;
    int i, j, k;
    int arr[20];

    printf("Wie viel Zahlen in einer Folge(maximal 20!)?\n");
    scanf("%d", &n);

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
            printf("%d     ", arrSum[i]);
        }

        for (i = 0; i < n; i++)
        {
            arr[i] = arrSum[i];
        }

        printf("\n");
    } while (n > 1);

    return 0;
}