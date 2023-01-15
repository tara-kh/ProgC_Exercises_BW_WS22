#include <stdio.h>
int main()
{
    int length;
    int arr[length];
    int i;
    int smallNum = arr[0];
    int bigNum = arr[0];
    int again;
    do
    {

        do
        {
            printf("wie viel Zahlenfolgen nacheinander, max 30!!!?");
            scanf("%d", &length);
            if (length > 30)
            {
                printf("das muss weniger als 30 sein! try it again!\n");
            }

        } while (length > 30);

        printf("zahl?\n");
        for (i = 0; i <= length - 1; i++)
        {
            printf("#%d ", i + 1);
            scanf("%d", &arr[i]);
        }
        for (i = length - 1; i >= 0; i--)
        {
            if (smallNum >= arr[i])
            {
                smallNum = arr[i];
            }
            if (bigNum <= arr[i])
            {
                bigNum = arr[i];
            }
            printf("%d  ", arr[i]);
            if (i % 5 == 0)
            {
                printf("\n");
            }
        }
        printf("the bigest Num: %d\n", bigNum);
        printf("the smallest Num: %d\n", smallNum);

        printf("again? 1-yes , 0-no\n");
        scanf("%d", &again);
    } while (again == 1);

    return 0;
}