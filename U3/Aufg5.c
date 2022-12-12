#include <stdio.h>

int calculate(int n1, char op, int n2)
{
    int calc;
    switch (op)
    {
    case '+':
        calc = n1 + n2;
        break;
    case '-':
        calc = n1 - n2;
        break;
    case '/':
        calc = n1 / n2;
        break;
    case '*':
        calc = n1 * n2;
        break;
    }
    return calc;
}

int main()
{
    int num;
    int num1;
    int num2;
    int result;
    char operator;

    printf("first Num:\n");
    scanf("%d", &num1);

    printf("operator?\n");
    scanf(" %c", &operator);

    printf("second Num:\n");
    scanf("%d", &num2);

    result = calculate(num1, operator, num2);

    while (1)
    {
        printf("zwischenSumme = %d\n", result);
        printf("operator?\n");
        scanf(" %c", &operator);

        if (operator== '=')
        {
            break;
        }
        printf(" Enter num: \n");
        scanf("%d", &num2);

        result = calculate(result, operator, num2);
    }
    printf("result is %d\n", result);

    return 0;
}