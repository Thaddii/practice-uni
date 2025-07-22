#include <stdio.h>

int main() {
    int zahl = 0;

    printf("Gebe eine Zahl ein: ");
    scanf("%d", &zahl);

    int ist_prim = 1;
    if (zahl <= 1) {
        ist_prim = 0;
    } else if(zahl == 2 || zahl == 3) {
        ist_prim = 1;
    } else if(zahl % 2 == 0 || zahl % 3 == 0) {
        ist_prim = 0;
    } else {
        for (int i = 5; i <= zahl / 2; i += 6) {
            if (zahl % i == 0 || zahl % (i + 2) == 0) {
                ist_prim = 0;
                break;
            }
        }
    }
    
    if(ist_prim) {
        printf("Deine eingegebene Zahl ist eine Primzahl!\n");
    } else {
        printf("Primfaktorzerlegung von %d: ", zahl);

        // Zahl wird solange durch 2 geteilt, wie nur möglich
        while (zahl % 2 == 0) {
            printf("2");
            zahl /= 2;
            if (zahl > 1) {
                printf(" * ");
            }
        }
        // Eine Zahl wird gesucht, mit welcher eingegebene Zahl als nächstes dividiert werden kann
        for (int i = 3; i <= zahl; i += 2) {
            while (zahl % i == 0) {
                printf("%d", i);
                zahl /= i;
                if (zahl > 1) {
                    printf(" * ");
                }
            }
        }
        // Wenn Zahl nicht dividierbar ist, also eine Primzahl, wird sie direkt ausgegeben
        if (zahl > 2) {
            printf("%d", zahl);
        }
        printf("\n");
    }
}