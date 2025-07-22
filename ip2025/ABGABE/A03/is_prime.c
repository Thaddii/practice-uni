#include <stdio.h>

int main() {
    int zahl = 0;
    int ist_prim = 1;

    printf("Gebe eine Zahl ein: ");
    scanf("%d", &zahl);

    if(zahl <= 1) {
        ist_prim = 0;
    } else if(zahl == 2 || zahl == 3) {
        ist_prim = 1;
    } else if(zahl % 2 == 0 || zahl % 3 == 0) {
        ist_prim = 0;
    } else {
        for(int i = 5; i <= zahl / 2; i += 6) {
            if(zahl % i == 0 || zahl % (i + 2) == 0) {
                ist_prim = 0;
                break;
            }
        }
    }
    if(ist_prim) {
        printf("Die eingegebene Zahl ist eine Primzahl!\n");
    } else {
        printf("Die eingegebene Zahl ist keine Primzahl!\n");
    }
}