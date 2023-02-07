#include <stdio.h>
#include <stdlib.h>

int funk(char *str)
{

    int i = 0;
    int counter = 0;
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

int main(void)
{
    char str[100];
    int result;
    int stop = 0;
    do
    {
        printf("Geben Sie einen ganzen Zahl ein:\n");
        scanf("%s", str); // do not need &

        result = funk(str);
        printf("die Anzahl der Stellen einer vom Benutzer eingegebenen ganzen Zahl: %d\n", result);
        printf("Wollen Sie wiederholen?     YES:press 1          NO:press 0\n");
        scanf("%d", &stop);
        if (stop == 0)
        {
            break;
        }
    } while (1);

    return 0;
}