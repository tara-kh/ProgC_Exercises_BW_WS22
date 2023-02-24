#include <stdio.h>

int funk(char *str)
{
    int counter = 0;
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] != '-' && str[i] != '+')
        {
            counter++;
        }

        i++;
    }
    return counter;
}

int main()
{
    char str[50];
    int stop = 0;
    int result;
    do
    {

        printf("Geben sie ein ganze Zahl ein : \n");
        scanf("%s", str);

        result = funk(str);
        printf("c = %d\n", result);

        printf("Wiederholen?  1-ja  0-nein\n");
        int wiederholen;
        scanf("%d", &wiederholen);
        if (wiederholen == 0)
        {
            break;
        }
    } while (1);

    return 0;
}
/*
1- baraye ferestadane string be function ay * pointer estefade mikonim

2- function  ma az noe int ast chon mikhahim meghdar counter ra bargardanad va be result berizad.

3- do while baes mishavad ke code avalain bar dae har sharayeti ejra shavad

4- while(1) baes mishavad ke ma yek loope binahayat dashte bashim va ba break an ra motevaghef konim.

5- wiederholen == 0 barabar ast ba !wiederholen .*/