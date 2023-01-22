#include <stdio.h>
#include <math.h>
int main(void)
{
    float x;
    float n1, n2, n3, n4;
    printf("reelNum?\n");
    scanf("%f", &x);

    n1 = sqrt(1 + (x * x));
    n2 = (1 + x) / (1 - x);
    n3 = sin(x);
    n4 = exp(-x);

    printf("n1 = %f\n", n1);
    printf("n2 = %f\n", n2);
    printf("n3 = %f\n", n3);
    printf("n4 = %f\n", n4);

    return 0;
}