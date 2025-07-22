#include <stdio.h>

int main() {
    int zahl = 0;
    printf("Geben sie eine natuerliche Zahl ein: ");
    scanf("%d", &zahl);

    if(zahl <= 1) {
        printf("Die Zahl muss größer 1 sein\n");
        return 1;
    }
    printf("Primfaktorzerlegung von %d: ", zahl);

    // Zahl wird solange durch 2 geteilt, wie nur möglich
    while(zahl % 2 == 0) {
        printf("2");
        zahl /= 2;
        if(zahl > 1) {
            printf(" * ");
        }
    }
    // Eine Zahl wird gesucht, mit welcher eingegebene Zahl als nächstes dividiert werden kann
    for(int i = 3; i <= zahl; i += 2) {
        while(zahl % i == 0) {
            printf("%d", i);
            zahl /= i;
            if(zahl > 1) {
                printf(" * ");
            }
        }
    }
    // Wenn Zahl nicht dividierbar ist, also eine Primzahl, wird sie direkt ausgegeben
    if(zahl > 2) {
        printf("%d", zahl);
    }
    printf("\n");
}