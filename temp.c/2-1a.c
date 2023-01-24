#include <stdio.h>
int main(void)
{
    int basis, potenz;
    int erg = 1, i = 0;

    printf("basis?\n");
    scanf("%d", &basis);

    printf("potenz?\n");
    scanf("%d", &potenz);

    while (potenz < 0)
    {
        printf("potentz darf nicht negativ sein!\n potentz?");
        scanf("%d", &potenz);
    }
    if (potenz == 0)
    {
        erg == 1;
    }
    else
    {
        do
        {
            erg = erg * basis;
            i++;
        } while (i < potenz);
    }

    printf("\n%d hoch %d ist %d\n\n", basis, potenz, erg);
    system("PAUSE");
}