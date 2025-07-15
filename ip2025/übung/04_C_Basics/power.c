#include <stdio.h>
#include <math.h>

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
    int result = pow(x, y);
    printf("%d\n", result);
}
