#include <stdio.h>

int main(int argc, char const *argv[])
{
    // 1.
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Your number: %d\n", num);
    
    // 2.
    for(int i = 1; i <= num; i++) {
        printf("%d", i);
    }
    printf("\n");

    //3.
    for(int i = 1; i <= num; i++) {
        if(i % 2 == 0) {
            printf("%d", i);
        }
    }
    printf("\n");

    return 0;
}
