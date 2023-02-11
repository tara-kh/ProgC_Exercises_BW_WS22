#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    float num1, num2, num3;
    char repeat;
    do
    {
        printf("Geben Sie drei Kommazahlen ein:\n");
        scanf("%f%f%f", &num1, &num2, &num3);

        if (num1 == num2 && num2 == num3)
        {
            printf("Alle drei Zahlen sind gleich. Wert: %.2f\n", num1);
        }
        else if (num1 == num2 || num1 == num3 || num2 == num3)
        {

            if (num1 == num2)
            {
                printf("Es gibt genau zwei gleiche Zahlen. Wert: %.2f\n", num1);
            }
            else if (num1 == num3)
            {
                printf("Es gibt genau zwei gleiche Zahlen. Wert: %.2f\n", num1);
            }
            else
            {
                printf("Es gibt genau zwei gleiche Zahlen. Wert: %.2f\n", num2);
            }
        }
        else
        {
            printf("Die drei Zahlen sind alle verschieden.\n");
        }

        printf("Do you want to repeat it? (y/n)\n");
        scanf(" %c", &repeat);
    } while (repeat == 'y');
    return 0;
}