#include <stdio.h>

int max(int array[], int length){
    int highest_num = 0;
    for(int i = 0; i < length; i++) {
        if(array[i] > highest_num) {
            highest_num = array[i];
        }
    }
    return highest_num;
}

int main(int argc, char const *argv[])
{
    int numbers[] = {2, 4, 55, 100};
    printf("%d", max(numbers, 4));
    return 0;
}
