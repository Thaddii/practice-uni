#include <stdio.h>

void print_as_matrix(int array[], int length) {
    int index = 0;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 5; j++) {
            printf("%d ", array[index]);
            index++;
        }
        printf("\n");
    }
}

int main(int argc, char const *argv[])
{
    int arr_2D[3][5] = {{-1, 12, -3, 2, 1}, {0, 0, 1, 2, 3}, {5, 5, -5, -6, 6}};

    int arr_1D[15];
    int index = 0;

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 5; j++) {
            arr_1D[index++] = arr_2D[i][j];
        }
    }

    for(int i = 0; i < 15; i++) {
        printf("%d ", arr_1D[i]);
    }
    printf("\n");

    printf("%d \n\n", arr_1D[(3 * 4) + 1]);

    //d)
    print_as_matrix(arr_1D, 15);

    //e)
    arr_2D[2-1][1-1] = 5;
    printf("%d\n", arr_2D[2-1][1-1]);

    return 0;
}
