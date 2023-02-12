#include <stdio.h>
#include <stdlib.h>

void umrechnenM(int *meter1, int *meter2, int *centi1, int *centi2)
{
    *meter1 = *meter1 * 1000;
    *meter2 = *meter2 * 1000;
    *centi1 = *centi1 * 10;
    *centi2 = *centi2 * 10;
}

int main(void)
{
    int m1, cm1, mm1;
    int m2, cm2, mm2;
    int funkm1, funkm2, funkcm1, funkcm2;

    int sum;
    //---------------------------------------------------------------------------------------------------------
    printf("Enter the first Number in meter, cm and mm:\n");
    scanf("%d %d %d", &m1, &cm1, &mm1);

    while (m1 < 0)
    {
        printf("die eingegebene Zahl in meter muss positive sein. Gib wieder ein:\n");
        scanf("%d", &m1);
    }
    while (cm1 < 0 || cm1 > 99)
    {
        printf("beachte den Basis 0<= cm < 99.....Gib wieder cm ein:\n");
        scanf("%d", &cm1);
    }
    while (mm1 < 0 || mm1 > 9)
    {
        printf("beachte den Basis 0<= mm < 10.....Gib wieder mm ein:\n");
        scanf("%d", &mm1);
    }
    //-----------------------------------------------------------------------------------------------------------
    printf("Enter the second Number in meter, cm and mm:\n");
    scanf("%d %d %d", &m2, &cm2, &mm2);

    while (m2 < 0)
    {
        printf("die eingegebene Zahl in meter muss positive sein. Gib wieder ein:\n");
        scanf("%d", &m2);
    }
    while (cm2 < 0 || cm2 > 99)
    {
        printf("beachte den Basis 0<= cm < 99.....Gib wieder cm ein:\n");
        scanf("%d", &cm2);
    }
    while (mm2 < 0 || mm2 > 9)
    {
        printf("beachte den Basis 0<= mm < 10.....Gib wieder mm ein:\n");
        scanf("%d", &mm2);
    }
    //--------------------------------------------------------------------------------------------------------------
    funkm1 = m1;
    funkm2 = m2;
    funkcm1 = cm1;
    funkcm2 = cm2;

    umrechnenM(&funkm1, &funkm2, &funkcm1, &funkcm2);
    sum = (funkm1 + funkcm1 + mm1) + (funkm2 + funkcm2 + mm2);
    int restMM = sum % 10;
    int centimeter = sum / 10;
    int restCM = centimeter % 100;
    int meter = centimeter / 100;

    printf("Die Summe von %d m, %d cm, %d mm und %d m, %d cm, %d mm ist %d mm bzw. %d m,%d cm, %d mm.\n", m1, cm1, mm1, m2, cm2, mm2, sum, restMM, restCM, meter);

    return 0;
}