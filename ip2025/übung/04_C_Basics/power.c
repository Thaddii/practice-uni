#include <stdio.h>

int main(int argc, char const *argv[])
{
    int x;
    int y;

    printf("Enter a number: ");
    scanf("%d", &x);
    printf("Enter a second number: ");
    scanf("%d", &y);
    
    if(y == 0) {
        return 1;
    }
    int result = 0;
    while(y != 0) {
        result = x * x;
        y--;
    }
    printf("%d", result);
}
