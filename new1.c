#include <stdio.h>
double multiply_Fun(double, double);

int main() {
    double a = 2, b = 19, c;
    c = multiply_Fun(a, b);
    printf("%lf * %lf = %lf \n", a, b, c);
}

double multiply_Fun(double x, double y) {
    return x * y;
}
