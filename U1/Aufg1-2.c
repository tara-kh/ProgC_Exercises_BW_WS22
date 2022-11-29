#include <stdio.h>
#include "mathkonst.h"
int main()
{
    float h, r;
    //float p = 3.14;
    float Volume;
    //  double x = M_PI;
    //   printf("X = %lf\n", x);}}

    printf("shoa ra vared konid:\n");
    scanf("%f", &r);

    printf("height ra vared konid:\n");
    scanf("%f", &h);

    Volume = M_PI * (r * r) * h;

    printf("Volumens eines Zylinders: %fm²", Volume);

    return 0;
}
