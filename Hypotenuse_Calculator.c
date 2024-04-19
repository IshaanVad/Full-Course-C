#include <stdio.h>
#include <math.h>

int main() {

    double a, b, c;

    printf("\nWhat is the number for side a? ");
    scanf("%lf", &a);

    printf("\nWhat is the number for side b? ");
    scanf("%lf", &b);

    c = sqrt(pow(a, 2) + pow(b, 2));

    printf("\nThe hypotenuse is: %lf", c);

    return 0;
}