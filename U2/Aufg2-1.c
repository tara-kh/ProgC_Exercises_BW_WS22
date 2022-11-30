#include <stdio.h>
#include <math.h>

int main()
{
    int h;

    printf("Geben Sie die momentane Höhenposition ein : \n");
    scanf("%d", &h);

    if (h >= 0 && h < 200)
    {
        printf("Klimazone ist maritimes Klima.\n");
    }
    else if (h >= 200 && h < 1800)
    {
        printf("Klimazone ist Regenwald.\n");
    }
    else if (h >= 1800 && h < 2300)
    {
        printf("Klimazone ist immergrüner Wald.\n");
    }
    else if (h >= 1800 && h < 2300)
    {
        printf("Klimazone ist immergrüner Wald.\n");
    }
    else if (h >= 2300 && h < 3500)
    {
        printf("Klimazone ist alpines Klima.\n");
    }
    else if (h >= 3500 && h < 4200)
    {
        printf("Klimazone ist ewiges Eis.\n");
    }
    return 0;
}