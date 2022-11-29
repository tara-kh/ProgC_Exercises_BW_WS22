#include <stdio.h>
#include <math.h>

int main()
{
    float x;
    printf("Geben sie einen reellen Zahl ein:\n");
    scanf("%f", &x);

    printf("%f\t %f\t %f\t %f \n", sqrt(1 + (x * x)), (1 + x) / (1 - x), sin(x), exp(-x));
    return 0;
}