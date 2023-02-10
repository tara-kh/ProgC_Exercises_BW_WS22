#include <stdio.h>
#include <stdlib.h>
#include "Diverses.h"

void reverse_in_situ(char *str)
{
    int len = strlen(str);
    char temp;
    int f = 0;
    int r = len - 1;
    while (f < r)
    {
        temp = str[f];
        str[f] = str[r];
        str[r] = temp;
        f++;
        r--;
    }
}
int main()
{
    char str[100];
    printf("Write a string:\n");
    scanf("%s", str);

    reverse_in_situ(str);

    printf("new string: %s\n", str);

    return 0;
}