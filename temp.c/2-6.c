#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int i = 0;
    int j;

    for (j = 0; j < 10; j++)
    {
        for (i = 0; i < 10; i++)
        {
            if (i + j == 7 && (i * j) % 7 == 0)
            {
                printf("** ");
            }
            else
            {
                printf("%d%d ", j, i);
            }
        }
        printf("\n");
    }
    system("PAUSE");
}