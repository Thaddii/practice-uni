#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num1, num2, num3;
    printf("Enter 3 numbers, seperated by space!: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    int count = 0;
    if(num1 != 0) {
        count++;
    }
    if(num2 != 0) {
        count++;
    }
    if (num3 != 0) {
        count++;
    }

    if(count % 2 == 0) {
        printf("Eine gerade Anzahl ist ungleich Null!");
    } else {
        printf("Eine ungerade Anzahl ist ungleich Null!");
    }
    return 0;
}
