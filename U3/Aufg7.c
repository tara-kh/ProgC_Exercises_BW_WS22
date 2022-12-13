#include <stdio.h>

int main(void)
{
    int s, w, w1, t, t1, h, h1, m, m1;
    printf("Geben Sie die Sekundenbetrag ein:\n");
    scanf("%d", &s);

    w = s / (60 * 60 * 24 * 7);
    w1 = s % (60 * 60 * 24 * 7);

    t = w1 / (60 * 60 * 24);
    t1 = w1 % (60 * 60 * 24);

    h = t1 / (60 * 60);
    h1 = t1 % (60 * 60);

    m = h1 / 60;
    m1 = h1 % 60;

    if (w > 1 && t > 1)
    {
        printf("%ds = %d Wochen, %d Tagen, %d:%d:%d Stunden\n", s, w, t, h, m, m1);
    }
    else if (w > 1 && t == 0)
    {
        printf("%ds = %d Wochen, %d Tage, %d:%d:%d Stunden\n", s, w, t, h, m, m1);
    }
    else if (w > 1 && t == 0)
    {
        printf("%ds = %d Wochen, %d Tage, %d:%d:%d Stunden\n", s, w, t, h, m, m1);
    }
    return 0;
}