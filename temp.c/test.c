#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct person
{
    char name[30];
    double weight;
    double height;
    double BMI;
} person;
void read_person(person *p)
{

    char esm[30];
    double vazn;
    double ghad;
    printf("name?\n");
    scanf("%s", esm);
    printf("Weight?\n");
    scanf("%lf", &vazn);
    printf("height\n");
    scanf("%lf", &ghad);

    p->weight = vazn;
    p->height = ghad / 100;
    strcpy(p->name, esm);
}
void BMI_calculator(person *p)
{

    p->BMI = (p->weight / (p->height * p->height));
}
char *decide(person p)
{
    char *situ[30];
    if (p.BMI >= 30)
    {
        *situ = "overweight";
    }
    else if (p.BMI < 30 && p.BMI >= 25)
    {
        *situ = "normal";
    }
    else
    {
        *situ = "Below";
    }
    return *situ;
}
int main()
{

    person p1;
    read_person(&p1);
    BMI_calculator(&p1);
    person p2;
    read_person(&p2);
    BMI_calculator(&p2);

    printf("name: %s\th: %lf\tw: %lf\tbmi: %lf\tsituation: %s\n", p1.name, p1.height, p1.weight, p1.BMI, decide(p1));

    printf("name: %s\th: %lf\tw: %lf\tbmi: %lf\tsituation: %s\n", p2.name, p2.height, p2.weight, p2.BMI, decide(p2));

    return 0;
}