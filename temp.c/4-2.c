#include <stdio.h>
#include <stdio.h>

void swapInteger1(int, int);
void swapInteger2(int *, int *);
void swapInteger3(int **, int **);

int main(void)
{

    int a = 5, b = 6;
    int *pa = &a;
    int *pb = &b;
    printf("beforswap1: a=%d, b=%d", a, b);
    swapInteger1(a, b);
    printf("Afterswap1: a=%d, b=%d\n", a, b);

    //---------------------------------------------------------------------------------------

    a = 5, b = 6;

    printf("beforswap2: a=%d, b=%d", a, b);
    swapInteger2(pa, pb);
    printf("Afterswap2: a=%d, b=%d\n", a, b);
    //-----------------------------------------------------------------------------------------------
    a = 5, b = 6;

    printf("beforswap3: a=%d, b=%d", a, b);
    swapInteger3(&pa, &pb);
    printf("Afterswap3: a=%d, b=%d\n", *pa, *pb);
    return 0;
}
void swapInteger1(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
    printf("swapInteger Version 1 ....\n");
    return;
}
//---------------------------------------------------------------------------
void swapInteger2(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    printf("swapInteger Version 2 ....\n");

    return;
}
//--------------------------------------------------------------------------------------------------
void swapInteger3(int **x, int **y)
{

    int *ptemp;
    ptemp = *x;
    *x = *y;
    *y = ptemp;
    printf("swapInteger Version 3 ....\n");
    return;
}
