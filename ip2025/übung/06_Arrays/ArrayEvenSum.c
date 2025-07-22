#include <stdio.h>

int evenSum(int array[], int length) {
    int sum = 0;
    for(int i = 0; i < length; i++) {
        if(array[i] % 2 == 0) {
            sum += array[i];
        }
    }
    return sum;
}

int main(int argc, char const *argv[])
{
    int numbers[] = {2, 10, 12, 19};
    printf("%d", evenSum(numbers, 4));
    return 0;
}
