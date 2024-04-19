#include <stdio.h>

int main() {

    // constant = fixed value that cannot be altered by the program during its execution
    const double pi = 3.141569; // value cannot be changed because of constant (provides secruity)

    /*
    addition +
    subtraction -
    multiplication *
    division /
    modulus % (the remainder of the division)
    increment ++
    decrement --
    */

    int x = 5;
    int y = 2;
    int z = x + y;
    printf("%d\n", z);

    float p = x / (float) y; // if integer, it will truncate | so, store value into a float to handle decimals and cast divisor as float
    printf("%.1f\n", p);

    int mod = x % y; // gives the remainder of x/y
    printf("%d", mod);

    // can also do "x += 2;" instead of doing "x = x + 2;" (works for other operators)

    return 0;
}