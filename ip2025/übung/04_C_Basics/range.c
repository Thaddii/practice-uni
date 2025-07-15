#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num1;
    int num2;

    printf("Enter a number: ");
    scanf("%d", &num1);
    printf("Enter a second number: ");
    scanf("%d", &num2);

    if(num1 < num2) {
        while(num1 <= num2) {
            printf("%d ", num1);
            num1++;
        }
    } else {
        while(num2 <= num1) {
            printf("%d ", num2);
            num2++;
        }
    }
    return 0;
}
