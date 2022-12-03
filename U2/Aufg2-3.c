#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, d, x1, x2;

    printf(" Geben Sie die Koeffizienten 'a' ein:\n");
    scanf("%f", &a);
    printf(" Geben Sie die Koeffizienten 'b' ein:\n");
    scanf("%f", &b);
    printf(" Geben Sie die Koeffizienten 'c' ein:\n");
    scanf("%f", &c);

    d = (pow(b, 2) / 4) - c;
    printf("d= %f\n", d);

    if (d < 0)
    {

        x1 = (-b / 2);
        x2 = sqrt(-d);
        printf("a=%.0f, b=%0.f, c=%.0f, %.0f + %.0fi und %.0f - %.0fi sind die beiden komplexen Lösungen", a, b, c, x1, x2, x1, x2);
    }
    else if (d == 0)
    {
        printf("%.0f ist die einzige reelle Lösung.\n", -b / 2);
    }

    else
    {
        printf("%.0f und %.0f sind die beiden reellen Lösungen.\n", (-b / 2 + sqrt(d)), (-b / 2 - sqrt(d)));
    }

    return 0;
}
