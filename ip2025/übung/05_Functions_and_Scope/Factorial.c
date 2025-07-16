#include <stdio.h>

int factorial(int num){
    int outcome = 1;
    for(int i = 1; i <= num; i++) {
        outcome *= i;
    }
    return outcome;
}

int main(int argc, char const *argv[])
{
    int number;
    printf("Enter a number you want to factorialize: ");
    scanf("%d", &number);

    if(number <= 1) {
        return 1;
    }

    int result = factorial(number);
    printf("The factorial of %d is: %d", number, result);
    return 0;
}
