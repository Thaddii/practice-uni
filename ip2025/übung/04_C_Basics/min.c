#include <stdio.h>

int main(int argc, char const *argv[])
{
    float num1 = 0;
    float num2 = 0;
    float num3 = 0;

    printf("Enter a number: ");
    scanf("%f", &num1);
    printf("Enter a second number: ");
    scanf("%f", &num2);
    printf("Enter a third number: ");
    scanf("%f", &num3);

    if(num1 < num2 && num1 < num3) {
        printf("%.2f - 1. Zahl", num1);
    } else if (num2 < num1 && num2 < num3) {
        printf("%.2f - 2. Zahl", num2);
    } else if (num3 < num1 && num3 < num2) {
        printf("%.2f - 3. Zahl", num3);
    }
    

    return 0;
}
