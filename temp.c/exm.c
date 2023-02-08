#include <stdio.h>
#include <stdlib.h>

int funk(char string[], char letter)
{
    int j = 0;
    int counter = 0;
    for (j = 0; string[j] != '\0'; j++)
    {
        if (string[j] == letter)
        {
            counter++;
        }
    }
    return counter;
}
//------------------------------------------------------------------------------------------------
int funk1(char letter)
{
    int j = 0;
    if (letter >= '0' && letter <= '9')
    {
        return 0;
    }
    else if (letter >= 'A' && letter <= 'Z' || letter >= 'a' && letter <= 'z')
    {
        return 1;
    }
    else
    {
        return 2;
    }
}
//-----------------------------------------------------------------------------------------------
int ascii(char z)
{
    int asc = z;
    if (asc < 0)
    {
        asc = asc + 256;
    }
    return asc;
}
//-----------------------------------------------------------------------------------------------
int main(void)
{
    char str[] = "Ein Herr faellt vom Stuhl (Erich Kaestner) Es ist bekannt, dass Menschen, die im Sitzen einschlafen, vornueber sinken. Immer tiefer und tiefer. Wenn die Koerpernerven, die trotz des Schlafens munter bleiben, spueren, dass sich das Schwergewicht allzu sehr vom Stuhl entfernt, geben sie dem Kopf einen Ruck. Er fliegt nach rueckwaerts, und das sogenannte Einnicken kann wieder von vorne beginnen. Wenn die Nerven aber den richtigen Augenblick versaeumen, purzelt der Schlaefer vom Stuhl. Alfredo Torres, einem braven Buerger von Buenos Aires, erging es so. Er schlief ein und fiel vom Stuhl. Waere ihm das zu Hause passiert, haette es niemand weiter erfahren, und die Oeffentlichkeit wuesste heute noch kein Wort ueber den Fall. Nun passierte die Sache aber leider Herrn Torres nicht zu Hause, sondern im Theater. Die Stuhlreihen waren schmal. Und nun interessiert sich eine ganze Stadt fuer die Angelegenheit. Herr Torres hat naemlich die Rechnung, die der Arzt sandte, keineswegs bezahlt, sondern dem Dramatiker geschickt, der an dem Malheur die Schuld traegt. Denn - argumentiert der Rechtsanwalt des Verletzten - waere das Theaterstueck amuesanter gewesen, waere Herr Torres nicht eingeschlafen. Waere er nicht eingeschlafen, waere er nicht vom Stuehlchen gefallen. Waere er nicht vom Stuehlchen gefallen, haette er sich nicht wehgetan. Also: er verletzte sich, weil das Stueck schlecht war. Der Fall liegt eigentlich klar. Aber nur fuer Herrn Torres und seinen Rechtsanwalt. Der Stueckeschreiber und dessen Rechtsanwalt sind natuerlich ganz anderer Ansicht. Da waehrend der Auffuehrung - wenn sie auch schlecht war - von zweitausend Besuchern nur ein einziger vom Stuhl fiel, scheint dieser Fall doch wohl mehr auf Kosten dieses Besuchers, als auf die des Stueckes gesetzt werden zu duerfen. Immerhin ist der Prozess noch im Gange. Wir wollen hoffen, dass Herr Torres mit seiner Klage abgewiesen wird. Denn wo kaemen wir hin, wenn es den Autoren so erschwert wuerde, langweilige Dramen auffuehren zu lassen?";
    int zeichnen = 0;
    int i = 0;
    int e = 0, z = 0, A = 0, M = 0;
    int buchstabe = 0, leerzichnen = 0;
    int Quersumme = 0;
    int funkQuersumme = 0;
    char strKlein[] = "";
    char funkStrKlein[] = "";
    //----------------------------------------------------------------------------------------------------------------
    for (i = 0; str[i] != '\0'; i++)
    {
        zeichnen++;
        switch (str[i])
        {

        case ('e'):
            e++;
            break;
        case ('z'):
            z++;
            break;
        case ('A'):
            A++;
            break;
        case ('M'):
            M++;
            break;
        }
    }
    //---------------------------------------------------------------------------------------------------------
    for (i = 0; str[i] != '\0'; i++)
    {
        int z = str[i];
        if (z >= 'A' && z <= 'Z' || z >= 'a' && z <= 'z')
        {
            buchstabe++;
        }
        if (z == 32)
        {
            leerzichnen++;
        }
        //-------------------------------------------------------------------------------------------------------------
        Quersumme += str[i];
        funkQuersumme = funkQuersumme + ascii(str[i]);
        //-------------------------------------------------------------------------------------------------------------
        strKlein[i] = str[i];
        if (strKlein[i] > 'A' && strKlein[i] < 'Z')
        {
            strKlein[i] = strKlein[i] + 32;
        }
        //----------------------------------------------------------------------------------------------
        // funkStrKlein[i](str[i]);
    }
    //----------------------------------------------------------------------------------------------------------
    printf("%d Zeichen enthält in der Text\n", zeichnen);
    printf("%d e enthält in der Text\n", e);
    printf("%d z enthält in der Text\n", z);
    printf("%d A enthält in der Text\n", A);
    printf("%d M enthält in der Text\n", M);
    printf("%d e enthält in der Text\n", funk(str, 'e'));
    printf("%d z enthält in der Text\n", funk(str, 'z'));
    printf("%d A enthält in der Text\n", funk(str, 'A'));
    printf("%d M enthält in der Text\n", funk(str, 'M'));
    printf("%d buchstabe enthält in der Text\n", buchstabe);
    printf("%d leerzichnen enthält in der Text\n", leerzichnen);
    printf("%d\n", funk1('.'));
    printf("%d ist die Quersumme\n", Quersumme);
    printf("%d ist die Quersumme mit funktion\n", funkQuersumme);
    printf("%s\n", strKlein);
    return 0;
}
