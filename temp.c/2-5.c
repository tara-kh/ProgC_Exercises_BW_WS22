
#include <stdlib.h>
#include <stdio.h>

double funk(double n1, char op, double n2)
{
    double result;
    switch (op)
    {

    case '+':
        result = n1 + n2;
        break;

    case '-':
        result = n1 - n2;
        break;

    case '/':
        result = n1 / n2;
        break;

    case '*':
        result = n1 * n2;
        break;
    }
    return result;
}

int main(void)
{
    double num1;
    double num2;
    char operator;
    double zwischenErgebnis;

    printf("enter the first num:\n");
    scanf("%lf", &num1);

    while (1)
    {

        printf("Enter the operator:\n");
        scanf("%s", &operator);

        if (operator== '=')
        {
            break;
        }

        printf("enter another num:\n");
        scanf("%lf", &num2);

        zwischenErgebnis = funk(num1, operator, num2);
        printf("zwischenErgebnis = %f\n", zwischenErgebnis);
        num1 = zwischenErgebnis;
    }
    system("PAUSE");
}