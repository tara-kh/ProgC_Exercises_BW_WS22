#include <stdio.h>

int main()
{

    char str[50];
    int counter = 0;
    printf("Geben sie ein ganze Zahl ein : \n");
    scanf("%s", str);
    printf("%s\n", str);

    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] != '-' && str[i] != '+')
        {
            counter++;
        }

        i++;
    }
    printf("c = %d\n", counter);
    return 0;
}
