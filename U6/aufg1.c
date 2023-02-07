#include <stdio.h>

int funkFoundLetter(char string[], char letter)
{

    int j;
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
//----------------------------------------------------------------------------------------------------------------------------
int funkFoundType(char letter)
{

    if (letter > 47 && letter < 58)
    {
        return 0;
    }
    else if (letter > 64 && letter < 91 || letter > 96 && letter < 123)
    {
        return 1;
    }
    else
    {
        return 2;
    }
}
//-----------------------------------------------------------------------------------------------------------------------------
int funkAsciiCode(int(dezNum))
{
    return dezNum;
}
//-----------------------------------------------------------------------------------------------------------------------------
int toChange(int letter)
{

    return letter + 32;
}
//-----------------------------------------------------------------------------------------------------------------------------
int search(char string[], int index, int *anfangsIndex, int *endeIndex, int *leange)
{
    int chap = 0;
    int rast = 0;
    int starts = 0;
    int endes = 0;
    for (int k = index; string[k] != '\0'; k++)
    {

        if (string[k] > 64 && string[k] < 91 || string[k] > 96 && string[k] < 123 || string[k] > 47 && string[k] < 58)
        {
            rast++;
        }
        else
        {
            starts = k - 1;
            break;
        }
    }
    for (int p = index; string[p] != '\0'; p--)
    {

        if (string[p] > 64 && string[p] < 91 || string[p] > 96 && string[p] < 123 || string[p] > 47 && string[p] < 58)
        {
            chap++;
        }
        else
        {
            endes = p + 1;
            *endeIndex = endes;
            break;
        }
    }
    //*leange = *ende - *anfang + 1;
    // printf("start: %d\n", *anfangsIndex);
    // printf("Ende: %d\n", *endeIndex);
    //  printf("Laenge: %d\n", );
    return 0;
}
//-----------------------------------------------------start main Programm-------------------------------------------------

int main()
{

    char str[] = "Ein Herr faellt vom Stuhl (Erich Kaestner) Es ist bekannt, dass Menschen, die im Sitzen einschlafen, vornueber sinken. Immer tiefer und tiefer. Wenn die Koerpernerven, die trotz des Schlafens munter bleiben, spueren, dass sich das Schwergewicht allzu sehr vom Stuhl entfernt, geben sie dem Kopf einen Ruck. Er fliegt nach rueckwaerts, und das sogenannte Einnicken kann wieder von vorne beginnen. Wenn die Nerven aber den richtigen Augenblick versaeumen, purzelt der Schlaefer vom Stuhl. Alfredo Torres, einem braven Buerger von Buenos Aires, erging es so. Er schlief ein und fiel vom Stuhl. Waere ihm das zu Hause passiert, haette es niemand weiter erfahren, und die Oeffentlichkeit wuesste heute noch kein Wort ueber den Fall. Nun passierte die Sache aber leider Herrn Torres nicht zu Hause, sondern im Theater. Die Stuhlreihen waren schmal. Und nun interessiert sich eine ganze Stadt fuer die Angelegenheit. Herr Torres hat naemlich die Rechnung, die der Arzt sandte, keineswegs bezahlt, sondern dem Dramatiker geschickt, der an dem Malheur die Schuld traegt. Denn - argumentiert der Rechtsanwalt des Verletzten - waere das Theaterstueck amuesanter gewesen, waere Herr Torres nicht eingeschlafen. Waere er nicht eingeschlafen, waere er nicht vom Stuehlchen gefallen. Waere er nicht vom Stuehlchen gefallen, haette er sich nicht wehgetan. Also: er verletzte sich, weil das Stueck schlecht war. Der Fall liegt eigentlich klar. Aber nur fuer Herrn Torres und seinen Rechtsanwalt. Der Stueckeschreiber und dessen Rechtsanwalt sind natuerlich ganz anderer Ansicht. Da waehrend der Auffuehrung - wenn sie auch schlecht war - von zweitausend Besuchern nur ein einziger vom Stuhl fiel, scheint dieser Fall doch wohl mehr auf Kosten dieses Besuchers, als auf die des Stueckes gesetzt werden zu duerfen. Immerhin ist der Prozess noch im Gange. Wir wollen hoffen, dass Herr Torres mit seiner Klage abgewiesen wird. Denn wo kaemen wir hin, wenn es den Autoren so erschwert wuerde, langweilige Dramen auffuehren zu lassen?";
    int i;
    int zeichnen = 0;
    int e = 0, z = 0, A = 0, M = 0;
    int buchstabe = 0;
    int leerzeichen = 0;
    int zifferFunk = 0, buchstabeFunk = 0, sonstigeFunk = 0;
    int querSumme = 0;
    int num = 2; // you can change the number if you want, It's just an example :)
    char strKlein[2500] = "";
    int buffer;
    char funkStrKlein[2500] = "";
    char userSearch[50] = "";
    int *anfangsIndex;
    int *endeIndex;
    int *leange;
    //------------------------------------Wie viel Zeichnen,Buchstaben,Leerzeichen,Ziffer,Sonstige?--------------------------------------------------

    for (i = 0; str[i] != '\0'; i++)
    {
        zeichnen++;
        if (str[i] > 64 && str[i] < 91 || str[i] > 96 && str[i] < 123)
        {
            buchstabe++;
        }
        if (str[i] == 32)
        {
            leerzeichen++;
        }

        //--------------------------------Wie viel Buchstaben,Ziffer,Sonstige mit Funktion?----------------------------------------------------------

        int result5 = funkFoundType(str[i]);
        if (result5 == 0)
        {
            zifferFunk++;
        }
        else if (result5 == 1)
        {
            buchstabeFunk++;
        }
        else
        {
            sonstigeFunk++;
        }
        //-----------------------------------------------querSumme---------------------------------------------------------------

        querSumme += str[i];
        //---------------------------------------------------------------------------------------------------------------------
        strKlein[i] = str[i];
        if (strKlein[i] > 64 && strKlein[i] < 91)
        {
            buffer = strKlein[i] + 32;
            strKlein[i] = buffer;
        }
        //---------------------------------------------------------------------------------------------------------------------
        funkStrKlein[i] = str[i];
        if (funkStrKlein[i] > 64 && funkStrKlein[i] < 91)
        {
            buffer = toChange(funkStrKlein[i]);
            funkStrKlein[i] = buffer;
        }
        //----------------------------------------------------ezAM-----------------------------------------------------------------------

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
    //-------------------------------------------------call funktions----------------------------------------------------------------------

    int result1 = funkFoundLetter(str, 'e');
    int result2 = funkFoundLetter(str, 'z');
    int result3 = funkFoundLetter(str, 'A');
    int result4 = funkFoundLetter(str, 'M');
    int result6 = funkAsciiCode(str[num]);

    //-----------------------------------------------------------------------------------------------------------------------------
    // printf("enter a word:\n");
    // scanf("%s", userSearch);
    // printf("enter a word: %s\n", userSearch);
    search(str, 12, anfangsIndex, endeIndex, leange);

    //--------------------------------------------------ausdrücken--------------------------------------------------------------
    printf("\n");
    printf("-----------------------------------------------------------------------------\n");
    printf("%d zeichnen enthält in der Text.\n", i);
    printf("-----------------------------------------------------------------------------\n");
    printf("%d 'e' enthält in der Text.\n", e);
    printf("%d 'z' enthält in der Text.\n", z);
    printf("%d 'A' enthält in der Text.\n", A);
    printf("%d 'M' enthält in der Text.\n", M);
    printf("-----------------------------------------------------------------------------\n");
    printf("%d 'e' enthält in der Text (mit Hilfe der Funktion).\n", result1);
    printf("%d 'z' enthält in der Text (mit Hilfe der Funktion).\n", result2);
    printf("%d 'A' enthält in der Text (mit Hilfe der Funktion).\n", result3);
    printf("%d 'M' enthält in der Text (mit Hilfe der Funktion).\n", result4);
    printf("-----------------------------------------------------------------------------\n");
    printf("%d Buchstabe enthält in der Text\n", buchstabe);
    printf("%d Leerzeichen enthält in der Text\n", leerzeichen);
    printf("-----------------------------------------------------------------------------\n");
    printf("%d Ziffer enthält in der Text (mit Hilfe der Funktion).\n", zifferFunk);
    printf("%d Buchstabe enthält in der Text (mit Hilfe der Funktion).\n", buchstabeFunk);
    printf("%d Sonstige enthält in der Text (mit Hilfe der Funktion).\n", sonstigeFunk);
    printf("-----------------------------------------------------------------------------\n");
    printf("%d ist die Summe der ASCII-Codes aller Zeichen im Text.\n", querSumme);
    printf("-----------------------------------------------------------------------------\n");
    printf("%d ist die ASCII-Code des Zeichen str[%d] im Text.\n", result6, num);
    printf("-----------------------------------------------------------------------------\n");
    printf("converted text to small letter in main program:\n%s\n", strKlein);
    printf("-----------------------------------------------------------------------------\n");
    printf("converted text to small letter mit Funktion:\n%s\n", funkStrKlein);
    printf("-----------------------------------------------------------------------------\n");
    return 0;
}