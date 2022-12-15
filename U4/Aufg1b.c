#include <stdio.h>
#include <math.h>

void hyperbolicus(double *x, double *y)
{
    double sinh = ((exp(*x)) - (exp(-*x))) / 2;
    *y = sinh;
}

int main()
{
    double x;
    double Tabellenanfang, Tabellenende, Schrittweite;
    double TabellenanfangResult, TabellenendeResult, SchrittweiteResult;

    double sinh;

    printf("Tabellenanfang?\n");
    scanf("%lf", &Tabellenanfang);
    hyperbolicus(&Tabellenanfang, &TabellenanfangResult);

    printf("Tabellenende?\n");
    scanf("%lf", &Tabellenende);
    hyperbolicus(&Tabellenende, &TabellenendeResult);

    printf("Schrittweite?\n");
    scanf("%lf", &Schrittweite);
    hyperbolicus(&Schrittweite, &SchrittweiteResult);

    printf("Tabellenanfang=%f, Tabellenende=%f, Schrittweite=%f\n", TabellenanfangResult, TabellenendeResult, SchrittweiteResult);

    return 0;
}