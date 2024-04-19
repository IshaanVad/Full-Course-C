#include <stdio.h>

void printAge(int age) {
    printf("You are %d years old\n", age);
}

void printpAge(int *pAge) {
    printf("You are %d years old\n", *pAge); // dereference
}

int main() {

    // pointer = a "variable-like" reference that holds a memory address to another variable, a
    //           some tasks are performed easier with pointers
    //           * = indirection operator (value at address)
    /* advantages of pointers:
                               - less time in program execution
                               - working on original variable
                               - with the help of pointers, we can create dat a structures (linked-list, stack, queue)
                               - returning more than one values from functions
                               - searching and sorting large data very easily
                               - dynamically memory allocation
    */

    int age = 21;
    int *pAge = NULL; // set to NULL first
    pAge = &age; // pointer naming convention: "*pNameOfVar = &nameOfVar"

    printf("address of age: %p\n", &age);
    printf("value of pAge: %p\n", pAge);

    printf("size of age: %d bytes\n", sizeof(age));
    printf("size of pAge: %d bytes\n", sizeof(pAge)); // a pointer = 2 bytes

    printf("value of age: %d\n", age);
    printf("value at stored address: %d\n", *pAge); // dereferencing

    printAge(age);
    printpAge(pAge);

    return 0;
}