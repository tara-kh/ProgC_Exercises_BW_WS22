#include <stdio.h>
#include <math.h>

double funk1(double zahl, double potentz)
{
    int i = 1;
    double mul = 1;
    while (i <= potentz) 
    {
        mul = mul * zahl;
        i++;
    }
    return mul;
}
double funk2(double zahl, double potentz)
{

    if (potentz == 0)
    {
        return 1;
    }
    else
    {
        double result2 = zahl * pow(zahl, potentz - 1);
        return result2;
    }
}

int main()
{

    double Zahl;
    int Potentz = 0;

    printf("Geben Sie die ganze Zahl ein: ");
    scanf("%lf", &Zahl);
    do
    {
        if (Potentz < 0)
        {
            printf("Potenz weniger als 0, ist nicht erlaubt!!\n");
        }
        printf("Geben Sie die Potentz Zahl ein: ");
        scanf("%d", &Potentz);
    } while (Potentz < 0);   // madami k shart dakhele parantez bargharar bashad bepar bala

    double result1 = funk1(Zahl, Potentz);
    double result2 = funk2(Zahl, Potentz);

    printf("Result1 = %lf\n", result1);
    printf("Result2 = %lf\n", result2);

    return 0;
}