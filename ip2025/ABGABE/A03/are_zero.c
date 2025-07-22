#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num1, num2, num3;
    printf("Enter 3 numbers, seperated by a space!: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    if((num1 != 0 && num2 != 0) || (num2 != 0 && num3 != 0) || (num1 != 0 && num3 != 0)) {
        printf("Mindestens zwei Zahlen sind nicht 0!");
    } else printf("Mindestens zwei Zahlen sind 0!");
    return 0;
}
