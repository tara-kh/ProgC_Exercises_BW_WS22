#include <stdio.h>
#include <math.h>

double funk(double x1, double y1)
{

    double result = sqrt(pow(x1, 2) - pow(y1, 2));
    // printf("result = %lf", result);

    if (result >= 0)
    {
        return 1;
    }
    return 0;
}

int main()
{
    double x, y;
    printf("Geben Sie den 'X' ein:");
    scanf("%lf", &x);
    printf("Geben Sie den 'Y' ein:");
    scanf("%lf", &y);

    double result = funk(x, y);
    printf("result = %1.0lf", result);

    return 0;
}
