#include <stdio.h>

int foundezAM(char string[], char letter)
{
    int i, result = 0;

    for (i = 0; string[i] != '\0'; i++)
    {
        if (string[i] == letter)
            result++;
    }
    return result;
}

int foundType(char letter)
{
    if ((letter >= 65 && letter <= 90) || (letter >= 97 && letter <= 122))
    {
        return 1;
    }
    else if ((letter >= 48 && letter <= 57))
    {
        return 0;
    }
    else
    {
        return 2;
    }
}

int asciiFunk(int letter)
{
    return letter;
}

int changedAscii(int letter)
{
    return letter + 32;
}
int main()
{

    char str[] = "2EinAAA Herr; faelltzzzzzzzzz vom  Stuhl (Erich Kaestner) Es ist bekannt, dass Menschen, die im Sitzen einschlafen, vornueber sinken.";

    int i;
    int zeichen, e, z, A, M = 0;
    int buchstabe, buchstabeFunc = 0;
    int leerzeichen, leerzeichenFunc = 0;
    int ziffer, zifferFunc;
    int querSumme;
    char strKlein[] = "";
    char strKleinFunk[] = "";

    for (i = 0; str[i] != '\0'; i++)
    {
        zeichen++;
        if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
        {
            buchstabe++;
        }
        if (str[i] == 32)
        {
            leerzeichen++;
        }
        if ((str[i] >= 48 && str[i] <= 57))
        {
            ziffer++;
        }
        int letterType = foundType(str[i]);
        if (letterType == 0)
        {
            zifferFunc++;
        }
        else if (letterType == 1)
        {
            buchstabeFunc++;
        }
        else
        {
            leerzeichenFunc++;
        }
        switch (str[i])
        {
        case 'e':
            e++;
            break;
        case 'z':
            z++;
            break;
        case 'A':
            A++;
            break;
        case 'M':
            M++;
            break;
        }
        int buffer = str[i];
        querSumme += buffer;
        // E-------------------------------------------------------------------------------------------
        strKlein[i] = str[i];
        if ((strKlein[i] >= 65 && strKlein[i] <= 90))
        {
            buffer = strKlein[i] + 32;
            strKlein[i] = buffer;
        }
        // Efunk-----------------------------------------------------------------------------------------------
        if ((str[i] >= 65 && str[i] <= 90))
        {
            int temp = changedAscii(str[i]);
            printf("%d ist der in nötigenfalls veränderte ASCII code fur zeichen %c!\n", temp, str[i]);
        }
    }

    int eFunk = foundezAM(str, 'e');
    int zFunk = foundezAM(str, 'z');
    int AFunk = foundezAM(str, 'A');
    int MFunk = foundezAM(str, 'M');
    int num = 34;
    int asciiCodeFunk = asciiFunk(str[num]);

    printf("%d 'Zeichen' enthält der Text.\n", zeichen);
    printf("%d 'e' enthält der Text.\n", e);
    printf("%d 'z' enthält der Text.\n", z);
    printf("%d 'A' enthält der Text.\n", A);
    printf("%d 'M' enthält der Text.\n", M);
    printf("%d 'e' Funk enthält der Text.\n", eFunk);
    printf("%d 'z' Funk enthält der Text.\n", zFunk);
    printf("%d 'A' Funk enthält der Text.\n", AFunk);
    printf("%d 'M' Funk enthält der Text.\n", MFunk);
    printf("%d Leerzeichen enthält der Text.\n", leerzeichen);
    printf("%d Buchstaben enthält der Text.\n", buchstabe);
    printf("%d Ziffer enthält der Text.\n", ziffer);
    printf("%d ZifferFunc enthält der Text.\n", zifferFunc);
    printf("%d buchstabeFunc enthält der Text.\n", buchstabeFunc);
    printf("%d sonstigeFunc enthält der Text.\n", leerzeichenFunc);
    printf("%d ist die Summe der ASCII-Codes aller Zeichen im Text!\n", querSumme);
    printf("%d ist der ASCII-Code von str[%d]!\n", asciiCodeFunk, num);
    printf("converted to klein: \n %s \n", strKlein);

    // printf("%d is the type of letter \n", letterType);

    return 0;
}