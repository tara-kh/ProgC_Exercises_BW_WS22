#include <stdio.h>
int main()
{

    int Zahl, Potentz = 0, Mul = 1;
    int i = 1;

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
    do
    {
        Mul = Mul * Zahl;
        i++;
    } while (i <= Potentz);

    printf("Result = %d", Mul);
    return 0;
}