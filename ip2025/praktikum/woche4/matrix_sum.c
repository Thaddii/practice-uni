#include <stdio.h>

void matrix_sum(double a[3][3], double b[3][3], double result[3][3]) {
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            result[i][j] = a[i][j] + b[i][j];
        }
    }
}

int main(int argc, char const *argv[])
{
    double a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    double b[3][3] = {{5, 3, 1}, {2, 7, 9}, {4, 6, 8}};
    double c[3][3];

    matrix_sum(a, b, c);
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%.0f ", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}
