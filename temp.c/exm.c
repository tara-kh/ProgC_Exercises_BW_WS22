#include <stdio.h>
#include <string.h>
#include <math.h>

struct cylinder
{
    double r, h;
};

int read_cylinder(struct cylinder *c1)
{
    double rt, ht;
    printf("radius?\n");
    scanf("%lf", &rt);
    printf("höhe?\n");
    scanf("%lf", &ht);
    c1->h = ht;
    c1->r = rt;
    if (rt < 0 || ht < 0)
    {
        return -1;
    }
    return 0;
}
double volume_cylinder(struct cylinder *c)
{
    double v;
    v = M_PI * (c->r * c->r) * c->h;
    return v;
}
int main()
{
    struct cylinder c1;
    struct cylinder c2;

    int result1 = read_cylinder(&c1);

    int result2 = read_cylinder(&c2);

    double volume1 = volume_cylinder(&c1);
    double volume2 = volume_cylinder(&c2);

    printf("Radius und Höhe des ersten Zylinders: %.3lf\t%.3lf\n", c1.r, c1.h);
    printf("Radius und Höhe des zweiten Zylinders: %.3lf\t%.3lf\n", c2.r, c2.h);
    if (result2 == -1 || result1 == -1)
    {
        printf("Eingabefehler - Abbruch\n ");
        return 0;
    }
    printf("zylinder 1: Radius: %.6lf\t, Hoehe %.6lf, Volimen : %.6lf\n", c1.r, c1.h, volume1);
    printf("zylinder 2: Radius: %.6lf\t, Hoehe %.6lf, Volimen : %.6lf\n", c2.r, c2.h, volume2);
    if (volume1 == volume2)
    {
        printf("Die Volumen der Zylinder sind gleich.\n");
    }

    return 0;
}
