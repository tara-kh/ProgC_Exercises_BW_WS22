#include <stdio.h>

int num1 = 2;
int num2 = 4;
void swapIntiger1(int n1, int n2)
{
    num1 = n1;
    num2 = n2;
    int temp = num1;
    num1 = num2;
    num2 = temp;
}
void swapIntiger2(int *n1, int *n2)
{
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}
void swapIntiger3(int **p1, int **p2)
{
    int temp = **p1;
    **p1 = **p2;
    **p2 = temp;
}

int main()
{
    printf("num1 and num2:\n");
    scanf("%d %d", &num1, &num2);
    swapIntiger1(num1, num2);
    printf("afterSwap1\n");
    printf("num1 = %d, num2 = %d\n", num1, num2);
    printf("----------------------------------------------------------------\n");

    swapIntiger2(&num1, &num2);
    printf("afterSwap2\n");
    printf("num1 = %d, num2 = %d\n", num1, num2);
    printf("-----------------------------------------------------------------\n");

    int *ptr1;
    ptr1 = &num1;
    int *ptr2;
    ptr2 = &num2;
    swapIntiger3(&ptr1, &ptr2);
    printf("num1 = %d, num2 = %d\n", *ptr1, *ptr2);
    printf("-----------------------------------------------------------------\n");
    return 0;
}