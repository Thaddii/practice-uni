#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num1;
    int num2;

    printf("Enter a number: ");
    scanf("%d", &num1);
    printf("Enter a second number: ");
    scanf("%d", &num2);

    if((num1 + num2) % 2 == 0) {
        int result = num1 * num2;
        printf("%d", result);
    } else {
        int result = num1 - num2;
        printf("%d", result);
    }
    
    return 0;
}
