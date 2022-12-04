/* aufg2-5.c */
/* Tests mit ganzzahligen Ausdruecken */

#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int x = 3;

    printf("%d\n", (8 / 5) / 2);
    printf("%d\n", 8 / (5 / 2));
    printf("%f\n", (8 / 5.) / 2);
    printf("%d\n", (50 / 4) % 2);
    printf("%d\n", (50 % 4) / 2);
    printf("%d\n", 50 % (4 / 2));
    printf("%d\n", (x == 1) && (x > 2));
    printf("%d\n", (x == 1) || (x > 2));
    printf("%d\n", !((x == 3) && (x > 2)));

    printf("\n\n");
    // system("pause");
}
