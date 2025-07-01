#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Your number: %d\n", num);

    for(int i = 1; i <= num; i++) {
        printf("%d", i);
    }
    printf("\n");


    return 0;
}
