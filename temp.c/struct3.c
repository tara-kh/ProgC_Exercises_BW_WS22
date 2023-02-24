#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct student
{

    double math;
    double physice;
    double average;
    char name[30];
};
void read_student(struct student *s)
{

    double riazi;
    double phizik;
    char esm[30];

    printf("name?\n");
    scanf("%s", esm);
    printf("Math:\n");
    scanf("%lf", &riazi);
    printf("physice:\n");
    scanf("%lf", &phizik);

    s->math = riazi;
    s->physice = phizik;
    strcpy(s->name, esm);
}
void average_note(struct student *s)
{
    s->average = (s->math + s->physice) / 2;
}
char *situation(struct student s)
{
    char *situ[50];
    if (s.math < 0 || s.physice < 0)
    {
        *situ = "Fehler_Abbruch";
        return *situ;
    }
    if (s.average < 10)
    {
        *situ = "nicht bestanden";
    }
    else
    {
        *situ = "bestanden";
    }

    return *situ;
}

int main()
{
    int i = 0;
    struct student s1;
    struct student s2;
    struct student s3;

    read_student(&s1);
    average_note(&s1);
    read_student(&s2);
    average_note(&s2);
    read_student(&s3);
    average_note(&s3);
    printf("%d- name: %s\tmath: %.1lf\tphysice: %.1lf\tavarage: %.1lf\t%s\n", ++i, s1.name, s1.math, s1.physice, s1.average, situation(s1));
    printf("%d- name: %s\tmath: %.1lf\tphysice: %.1lf\tavarage: %.1lf\t%s\n", ++i, s2.name, s2.math, s2.physice, s2.average, situation(s2));
    printf("%d- name: %s\tmath: %.1lf\tphysice: %.1lf\tavarage: %.1lf\t%s\n", ++i, s3.name, s3.math, s3.physice, s3.average, situation(s3));

    return 0;
}