#include <stdio.h>

int getNumber(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    return num;
}

int main(int argc, char const *argv[])
{
    int amount = 0;
    printf("How many numbers do you want to enter? ");
    scanf("%d", &amount);

    int max = 0, min;
    float summe;

    for(int i = 0; i < amount; i++) {
        int zahl = getNumber();
        if(zahl < min) min = zahl;
        if(zahl > max) max = zahl;
        summe += zahl;
    }

    printf("Das Maximum ist: %d\n", max);
    printf("Das Minimum ist: %d\n", min);
    printf("Der Mittelwert ist: %.2f\n", summe / amount);
    return 0;
}
