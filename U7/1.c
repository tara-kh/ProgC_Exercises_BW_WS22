#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct typName
{
    int num;
    char word;
    char str[20];
};
void swapArtikel1(struct typName *this, struct typName *other)
{
    int tempInt;
    char tempChar;
    char tempStr[20];

    tempInt = this->num;
    tempChar = this->word;
    strcpy(tempStr, this->str);
    //------------------------------------------
    this->num = other->num;
    this->word = other->word;
    strcpy(this->str, other->str);
    //------------------------------------------
    other->num = tempInt;
    other->word = tempChar;
    strcpy(other->str, tempStr);
    //------------------------------------------
}
void swapArtikel2(struct typName *this, struct typName *other)
{
    struct typName sTemp;
    sTemp = *this;
    *this = *other;
    *other = sTemp;
}
int main()
{
    struct typName s1 = {12, 'c', "asdf"};
    struct typName s2 = {24, 'k', "lkjh"};

    printf("before swapping:num: %d\t buchstabe: %c\t   string: %s\n", s1.num, s1.word, s1.str);

    swapArtikel1(&s1, &s2);
    printf("after swapping:num: %d\t buchstabe: %c\t   string: %s\n", s1.num, s1.word, s1.str);
    //---------------------------------------------------

    printf("before swapping:num: %d\t buchstabe: %c\t   string: %s\n", s1.num, s1.word, s1.str);
    swapArtikel2(&s1, &s2);
    printf("after swapping:num: %d\t buchstabe: %c\t   string: %s\n", s1.num, s1.word, s1.str);
    return 0;
}