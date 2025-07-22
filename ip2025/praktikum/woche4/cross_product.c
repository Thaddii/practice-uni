#include <stdio.h>

void cross_product(double a[], double b[], double result[]) {
    result[0] = (a[1] * b[2]) - (a[2] * b[1]);
    result[1] = (a[2] * b[0]) - (a[0] * b[2]);
    result[2] = (a[0] * b[1]) - (a[1] * b[0]);

}

int main(int argc, char const *argv[])
{
    double a[3] = {4, -1, 3};
    double b[3] = {-12, 8, 2};
    double c[3];

    cross_product(a, b, c);
    for(int i = 0; i < 3; i++) {
        printf("%.0f \n", c[i]);
    }

    return 0;
}
