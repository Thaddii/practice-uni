#include <stdio.h>

int main(int argc, char const *argv[])
{
    double num1, num2, num3;
    printf("Enter 3 numbers, seperated by a space!: ");
    scanf("%lf %lf %lf", &num1, &num2, &num3);

    if(num1 >= (num2 + num3)) {
        return 1;
    } else if(num2 >= (num1 + num3)) {
        return 1;
    } else if(num3 >= (num2 + num1)) {
        return 1;
    } else return 0;
}
