#include <stdio.h>

void ArrayPrint(int array[], int length) {
    for(int i = 0; i < length; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main(int argc, char const *argv[])
{
    int numbers[] = {2, 4, 55, 190};
    ArrayPrint(numbers, 4);
    return 0;
}
