#include <stdio.h>

int print_array(int array[], int length) {
    for(int i = 0; i <= length; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    return 0;
}

int array_sum(int array[], int length) {
    int result = 0;
    for(int i = 0; i <= length; i++) {
        result += array[i];
    }
    return result;
}

int array_max(int array[], int length){
    int highest_num = 0;
    for(int i = 0; i <= length; i++) {
        if(array[i] > highest_num) {
            highest_num = array[i];
        }
    }
    return highest_num;
}

int array_min(int array[], int length) {
    int lowest_num = 1000;
    for(int i = 0; i <= length; i++) {
        if(array[i] < lowest_num) lowest_num = array[i];
    }
    return lowest_num;
}

float array_average(int array[], int length) {
    float sum = 0;
    for(int i = 0; i <= length; i++) {
        sum += array[i];
    }
    float average = (sum / (length + 1));
    return average;
}

int main(int argc, char const *argv[])
{
    int numbers[] = {2, 4, 6, 8};
    print_array(numbers, 3);

    printf("%d\n", array_sum(numbers, 3));

    printf("%d\n", array_max(numbers, 3));

    printf("%d\n", array_min(numbers, 3));

    printf("%.2f\n", array_average(numbers, 3));
    return 0;
}
