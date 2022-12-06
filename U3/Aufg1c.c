#include <stdio.h>
int main()
{

    int Zahl, Potentz = 0, Mul = 1;
    int i;

    printf("Geben Sie die ganze Zahl ein:");
    scanf("%d", &Zahl);
    do
    {
        if (Potentz < 0)
        {
            printf("Potenz weniger als 0, ist nicht erlaubt!!\n");
        }
        printf("Geben Sie die Potentz Zahl ein??????:");
        scanf("%d", &Potentz);
    } while (Potentz < 0);
    for (i = 1; i <= Potentz; i++)
    {
        Mul = Mul * Zahl;
    }
    printf("Result = %d", Mul);

    return 0;
}