#include <stdio.h>

void hello(char[], int); // function prototype

int main() {

    // function prototype:
    // function declaration, w/o a body, before main() ensures that calls to a function are made with the correct arguments

    // IMPORTANT NOTES:
    // Many C compilers do not check for parameter matching
    // Missing arguments will result in unexpected behavior
    // A function prototype causes the compiler to flag an error if arguements are missing

    // Advantages:
    // 1. Easier to navigate a program w/ main() at the top
    // 2. Helps with debugging
    // 3. Commonly used in header files

    hello("Bro", 21); // the function prototype makes sure the amount of arguments

    return 0;
}

void hello(char name[], int age) { // function
    printf("Hello %s. You are %d.", name, age);
}