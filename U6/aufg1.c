#include <stdio.h>
int main()
{

    char str[] = "Ein Herr faellt vom Stuhl (Erich Kaestner) Es ist bekannt, dass Menschen, diie im Sitzen einschlafen, vornueber sinken.";
    int zeichen = 0;
    int i;
    for (i = 0; str[i] != '\0'; i++)
    {
        zeichen++;
    }
    printf("%d Zeichen enthält der Text.\n", zeichen);
    return 0;
}