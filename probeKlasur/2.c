#include <stdio.h>
#include <string.h>

void replace(char *string)
{
    int i, j, replacement = 0;
    int length = strlen(string);

    for (i = 0; i < length; i++)
    {
        if ((string[i] == 'a' || string[i] == 'A') && (string[i + 1] == 'u' || string[i + 1] == 'U'))
        {
            if (string[i] == 'a')
            {
                if (string[i + 1] == 'u')
                {
                    string[i] = 'e';
                    string[i + 1] = 'i';
                    replacement++;
                }
                else
                {
                    string[i] = 'e';
                    string[i + 1] = 'I';
                    replacement++;
                }
            }
            if (string[i] == 'A')
            {
                if (string[i + 1] == 'u')
                {
                    string[i] = 'E';
                    string[i + 1] = 'i';
                    replacement++;
                }
                else
                {
                    string[i] = 'E';
                    string[i + 1] = 'I';
                    replacement++;
                }
            }
        }
    }
    printf("new string: %s\n", string);
    printf("How many replacement? %d\n", replacement);
}

int main(void)
{
    char string[21];
    printf("Enter a string(max 20 charecters, no spaces:)\n");
    scanf("%s", string);

    replace(string);
    return 0;
}