#include <stdio.h>
#include <math.h> // must include this at top to used math functions

int main() {

    double A = sqrt(9);
    double B = pow(2, 4);
    int C = round(3.14);
    int D = ceil(3.14); // ceiling of number, so 4
    int E = floor(3.99); // floor of number, so 3
    double F = fabs(-100); // absolute value, so 100.00000
    double G = log(3);
    double H = sin(45);
    double I = cos(45);
    double J = tan(45);

    printf("%lf", J);

    return 0;
}