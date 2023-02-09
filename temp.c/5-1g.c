#include <stdio.h>
#include <stdlib.h>
#include "Diverses.h"

int search(char *text1, int index1, int *anfangsIndex1, int *endeIndex1)
{
    int k = index1;
    int chap = 0;
    int rast = 0;
    int starts = 0;
    int endes = 0;

    for (k; text1[k] != '\0'; k++)
    {

        if (text1[k] > 'A' && text1[k] < 'Z' || text1[k] > 'a' && text1[k] < 'z' || text1[k] > '0' && text1[k] < '9')
        {
            rast++;
        }
        else

        {
            endes = k - 1;
            *endeIndex1 = endes;
            break;
        }
    }
    for (k; text1[k] != 0; k--)
    {

        if (text1[k] > 'A' && text1[k] < 'Z' || text1[k] > 'a' && text1[k] < 'z' || text1[k] > '0' && text1[k] < '9')
        {
            chap++;
        }
        else
        {
            starts = k + 1;
            *anfangsIndex1 = starts;
            break;
        }
    }
    //*leange = *ende - *anfang + 1;
    // printf("start: %d\n", *anfangsIndex);
    // printf("Ende: %d\n", *endeIndex);
    //  printf("Laenge: %d\n", );
    return 0;
}
int main(void)
{

    char text[] = "Ein Herr faellt vom Stuhl (Erich Kaestner) Es ist bekannt, dass Menschen, die im Sitzen einschlafen, vornueber sinken.";
    int index;
    int length;
    int anfangsIndex;
    int endeIndex;
    length = search(text, index, &anfangsIndex, &endeIndex);
    printf("\n\n  anfangsIndex = %d    endeIndex = %d    length= %d \n\n", anfangsIndex, endeIndex, anfangsIndex - endeIndex);

    PAUSE
}