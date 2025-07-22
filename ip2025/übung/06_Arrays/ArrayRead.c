#include <stdio.h>

void ArrayRead(int array[], int length) {
    for(int i = 0; i < length; i++) {
        printf("Enter a number: ");
        scanf("%d", &array[i]);
    }
}

int main(int argc, char const *argv[])
{
    int array[100];
    int length = 0;
    printf("How many numbers do you want to store in the array?: ");
    scanf("%d", &length);

    ArrayRead(array, length);

    for(int i = 0; i < length; i++) {
        printf("%d ", array[i]);
    }
    return 0;
}
