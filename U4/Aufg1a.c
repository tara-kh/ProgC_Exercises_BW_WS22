// SOLVED WITH "CALL BY VALUE"

#include <stdio.h>
#include <math.h>

double hyperbolicus(double x)
{
    double sinh = ((exp(x)) - (exp(-x))) / 2;
    return sinh;
}

int main()
{
    double x;
    double Tabellenanfang, Tabellenende, Schrittweite;
    double sinh;

    printf("Tabellenanfang?\n");
    scanf("%lf", &Tabellenanfang);

    double result1 = hyperbolicus(Tabellenanfang);

    printf("Tabellenende?\n");
    scanf("%lf", &Tabellenende);

    double result2 = hyperbolicus(Tabellenende);
    printf("Schrittweite?\n");
    scanf("%lf", &Schrittweite);

    double result3 = hyperbolicus(Schrittweite);

    printf("Tabellenanfang=%f, Tabellenende=%f, Schrittweite=%f\n", result1, result2, result3);

    return 0;
}