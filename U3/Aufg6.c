

#include <stdio.h>

int main(void)
{
    int i, j;
    int counter = -1;
    int x = 7;

    for (j = 0; j <= 9; j++)
    {
        for (i = 0; i <= 9; i++)
        {
            counter++;
            // printf("counter = %d  ", counter);
            if (i + j == 7 && counter % 7 == 0)
            {
                printf("**  ");
            }
            else
            {
                printf("%d", j);
                printf("%d  ", i);
            }
        }
        printf("\n");
    }
    // printf("%02d ", x);  zweistellig ausgibt
    return 0;
}