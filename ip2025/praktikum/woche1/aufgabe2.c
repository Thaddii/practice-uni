#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    int f = 1;
    int i = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    while(i <= n) {
        f = f * i;
        i = i + 1;
    }
    printf("The result of f: %d\n", f); // n = 0 == 4 && n = 4 == 24

}
