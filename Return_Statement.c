#include <stdio.h>

// void doesn't return anything
// int returns an int
// double returns a double
// char returns a char
// etc. for other data types



// return = returns a value back to a calling function
int main() {

    double returnFunctionValue = square(3.14);

    printf("%lf", returnFunctionValue);

    return 0;
}

double square(double x) { 

    double result = x * x;
    return result; // returns a double value

}