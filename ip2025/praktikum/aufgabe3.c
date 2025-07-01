#include <stdio.h>

int main(int argc, char const *argv[])
{
    // 1.
    for(int i = 1; i <= 10; i++) {
        printf("%d ", i);
    }
    printf("\n");

    /*
    int i = 1;
    while(i <= 10) {
        printf("%d ", i);
        i++;
    }
    printf("\n");
    */

    // 2.
    for(int i = 1; i <= 5; i++) {
        if(i % 2 == 0) {
            printf("%d - gerade\n", i);
        }
        else {
            printf("%d - ungerade\n", i);
        }
    }

    // 3.
    for(int i = 1; i <= 100; i++) {
        if(i != 22) {
            printf("%d\n", i);
        }
    }

    // 4.
    for(int i = 1; i <= 10; i++) {
        for(int j = 1; j <= 10; j++) {
            int ergebnis = i * j;
            printf("%d * %d = %d \n", i, j, ergebnis);
        }
        printf("\n");
    }

    // 5.
    int num1 = 1;
    do {
        printf("Enter a number: ");
        scanf("%d", &num1);

        if(num1 % 2 == 0) {
            printf("%d - gerade\n", num1);
        }
        else {
            printf("%d - ungerade\n", num1);
        }
    } while (num1 != 0);

    // 6.
    // Primzahlen

    return 0;
}
