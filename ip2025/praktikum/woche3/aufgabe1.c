#include <stdio.h>

int add(int num1, int num2) {
    int sum = num1 + num2;
    return sum;
}

int max(int num1, int num2, int num3) {
    if(num1 > num2 && num1 > num3) {
        return num1;
    } else if(num2 > num1 && num2 > num3) {
        return num2;
    } else return num3;
}

int is_even(int num) {
    if(num % 2 == 0) {
        return 1;
    } else return 0;
}

int factorial(int num) {
    int sum = 1;
    for(int i = 2; i <= num; i++) {
        sum *= i;
    }
    return sum;
}

int main(int argc, char const *argv[])
{
    printf("%d\n", add(3, 8));

    printf("%d\n", max(3, 5, 8));

    printf("%d\n", is_even(2));

    printf("%d\n", factorial(4));
    return 0;
}
