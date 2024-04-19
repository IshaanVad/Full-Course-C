#include <stdio.h>

int main() {

    // Bitwise Operators = special operators used in bit level programming
    //                     (knowing binary is important for this topic)

    // & = AND
    // | = OR
    // ^ = XOR
    // << left shift
    // >> right shift

    int x = 6; //   6 = 00000110 (8 bits = 1 byte)
    int y = 12; // 12 = 00001100
    int z = 0; //   0 = 00000000

    z = x & y; //   z = 00000100 = 4 (just an AND gate for each binary digit compared)
    z = x | y; //   z = 00001110 = 14
    z = x ^ y; //   z = 00001010 = 10
    z = x << 1; //  z = 00001100 = 12 (just shift the bits over by the number after "<<" and empty spots with 0)
    z = x << 2; //  z = 00011000 = 24
    z = x >> 1; //  z = 00000011 = 3
    z = x >> 2; //  z = 00000001 = 1

    return 0;
}