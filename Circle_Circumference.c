#include <stdio.h>

int main() {

    const double PI = 3.14159;
    double radius;
    double circumference;

    printf("\nEnter a radius of a circle: ");
    scanf("%lf", &radius);

    circumference = 2 * PI * radius;

    printf("Cirumference of this circle: %.5lf", circumference);

    return 0;
}