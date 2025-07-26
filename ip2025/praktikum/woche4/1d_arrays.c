#include <stdio.h>

int main(int argc, char const *argv[])
{
    int arr_2D[3][5] = {{-1, 12, -3, 2, 1}, {0, 0, 1, 2, 3}, {5, 5, -5, -6, 6}};
    return 0;

    int arr_1D[15];
    int index = 0;

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            arr_1D[index++] = arr_2D[i][j];
        }
    }

    for(int i = 0; i < 15; i++) {
        printf("%d", arr_1D[i]);
    }
    printf("\n");
}
