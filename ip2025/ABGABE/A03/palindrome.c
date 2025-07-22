#include <stdio.h>

int main()
{
    int zahl, gedrehtezahl = 0, speicher, zahlrechnung;

    printf("Gebe eine Zahl ein: ");
    scanf("%d", &zahl);

    zahlrechnung = zahl;

    if(zahl <= 9 && zahl >= 0){
        printf("Die Zahl %d, ist ein Palindrome!\n", zahl);
        return 0;
    }

    if(zahl < 0){
        printf("Die Zahl %d, ist kein Palindrome!\n", zahl);
        return 1;
    }

   while (zahlrechnung != 0)
    {
        speicher = zahlrechnung % 10; // Bekommt letzte Zahl. Bsp. 1001 % 10 = 1
        gedrehtezahl = gedrehtezahl * 10 + speicher; // Diese Ziffer ans Ende der Ergebniszahl anhängen
        zahlrechnung = zahlrechnung / 10; // Entfernt letzte Nummer von Zahlrechnung und startet While-Schleife neu. Bsp. 1001 / 10 = 100 -> keine Nachkommastelle
    }

    if(gedrehtezahl == zahl){
        printf("Die Zahl %d, ist ein Palindrome", zahl);
    }
    else{
        printf("Die Zahl %d, ist kein Palindrome", zahl);
    }

    return 0;
}