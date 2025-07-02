#include <stdio.h>

void evenNum(int num) {
    if(num % 2 == 0) {
        printf("%d ", num);
    }
}

int main(int argc, char const *argv[])
{
    int num1 = 0;
    int num2 = 0;

    printf("Enter a number: ");
    scanf("%d", &num1);
    printf("Enter another number: ");
    scanf("%d", &num2);

    while(num1 <= num2) {
        evenNum(num1);
        num1++;
    }
    printf("\n");
    return 0;
}


