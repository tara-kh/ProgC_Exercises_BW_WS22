#include <stdio.h>
#include <string.h>

struct car
{
    char name[100];
    int bak;
    int masraf;
    int km;
} car;

void read_car1(struct car p206)
{
    p206.km = 5555;
    printf("read car in func saade: name: %s BAK: %d MAsraf %d , km: %d\n", p206.name, p206.bak, p206.masraf, p206.km);
}
void read_car2(struct car *p206)
{
    p206->km = 5555;
    printf("read car in func pinter: name: %s BAK: %d MAsraf %d , km: %d\n", p206->name, p206->bak, p206->masraf, p206->km);
}
int main()
{

    struct car corola = {"toyota", 120, 12};
    struct car p206 = {"pejo", 70, 8};
    read_car1(p206);
    printf("read car in main name: %s BAK: %d MAsraf %d , km: %d\n", p206.name, p206.bak, p206.masraf, p206.km);
    read_car2(&p206);
    printf("read car in main name: %s BAK: %d MAsraf %d , km: %d\n", p206.name, p206.bak, p206.masraf, p206.km);

    //  printf("toyota = %d       206 = %d, 207=%d", corola.km, p206.km, p207.km);

    return 0;
}