#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float funk(float, float, float *);
int main(void)
{

    float x = 10, y = 6;
    float erg;
    float reselt;

    reselt = funk(x, y, &erg);
    if (reselt == 1)
    {
        printf("Das Ergebnis ist %f\n", erg);
    }
    else
    {
        printf("Der Funktionswert ist nicht definiert.\n");
    }
    return 0;
}

float funk(float x1, float y1, float *erg)
{
    float xQuad = x1 * x1;
    float yQuad = y1 * y1;

    if (xQuad >= yQuad)
    {
        *erg = sqrt(xQuad - yQuad);
        return 1;
    }
    else
    {
        *erg = 0;
        return 0;
    }
}
