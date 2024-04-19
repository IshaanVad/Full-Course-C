#include <stdio.h>

int main() {

    /* 
    Hierarchy for data types (least amount of memory --> most amount of memory needed):
    WHOLE NUMBERS:
    short int = 2 bytes [format specifier = %hd]
    unsigned short int = 2 bytes [format specifier = %hu]
    unsigned int = 4 bytes [format specifier = %u]
    int = 4 bytes [format specifier = %d]
    long int = 4 bytes [format specifier = %ld]
    unsigned long int = 4 bytes [format specifier = %lu]
    long long int = 8 bytes [format specifier = %lld]
    unsigned long long int = 8 bytes [format specifier = %llu]

    DECIMAL NUMBERS:
    signed char = 1 byte [format specifier = %c]
    unsigned char = 1 byte [format specifier = %c]
    float - 4 bytes [format specifier = %f]
    double = 8 bytes [format specifier = %lf]
    long double = 16 bytes [format specifier = %Lf]

    char[] array = [format specifier = %s]
    */

    // BOOLEANS: (#include <stdbool.h> at top of code) bool e = true; | 1 byte (true or fale) [format specifier = %d]

    // variables consist of declarations and intialization
    int x;       // declaration
    x = 123;     // intialization
    int y = 321; // declaration + intialization

    int age = 21;         // integer
    float gpa = 2.05;     // floating point number (contains decimal)
    char grade = 'C';     // char stores a single character use ' '
    char name[] = "John"; // NO STRING IN C (b/c string is an object and C isn't OOP) | must make char array instead

    printf("Hello %s.\n", name); // use format specficers
    printf("You are %d years old.\n", age);
    printf("You're grade is a %c.\n", grade);
    printf("You're GPA is a %.2f.", gpa); //the .2 represents how much decimal places desired

    return 0;
}