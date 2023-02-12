#include <stdio.h>
#include <string.h>

int main(void)
{
    char string[100];
    int i, j, replacement = 0;
    int length = strlen(string);
    printf("Enter a string(max 20 charecters, no spaces:)\n");
    scanf("%s", string);
    do
    {
        for (i = 0; i < length; i++)
        {
            if (string[i] == ' ')
            {
                printf("keine Leerzeichen!!Geben Sie wieder einen Zeichnenkette ein:\n");
                scanf("%s", string);
            }
        }
    } while (string[i] != ' ');

    if (length > 20)
    {
        length = 20;
    }
    for (i = 0; i < length - 1; i++)
    {
        if ((string[i] == 'a' || string[i] == 'A') && (string[i + 1] == 'u' || string[i + 1] == 'U'))
        {
            if (string[i] == 'a')
            {
                if (string[i + 1] == 'u')
                {
                    string[i] = 'e';
                    string[i + 1] = 'i';
                    replacement += 2;
                }
                else
                {
                    string[i] = 'e';
                    string[i + 1] = 'I';
                    replacement += 2;
                }
            }
            if (string[i] == 'A')
            {
                if (string[i + 1] == 'u')
                {
                    string[i] = 'E';
                    string[i + 1] = 'i';
                    replacement += 2;
                }
                else
                {
                    string[i] = 'E';
                    string[i + 1] = 'I';
                    replacement += 2;
                }
            }
        }
    }
    if (strlen(string) > 20)
    {
        printf("new string: %.20s  (wird abgeschnitten)\n", string);
    }
    else
    {
        printf("new string: %.20s\n", string);
    }

    printf("How many replacement? %d\n", replacement);

    return 0;
}
