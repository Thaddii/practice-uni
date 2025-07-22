#include <stdio.h>

void matrix_sum(double a[3][3], double b[3][3], double result[3][3]) {
    result[0][0] = a[0][0] + b[0][0];
    result[0][1] = a[0][1] + b[0][1];
    result[0][2] = a[0][2] + b[0][2];

    result[1][0] = a[1][0] + b[1][0];
    result[1][1] = a[1][1] + b[1][1];
    result[1][2] = a[1][2] + b[1][2];

    result[2][0] = a[2][0] + b[2][0];
    result[2][1] = a[2][1] + b[2][1];
    result[2][2] = a[2][2] + b[2][2];
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
