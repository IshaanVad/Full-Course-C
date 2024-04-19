#include <stdio.h>

int main() {

    // memory = an array of bytes within RAM (ex: street)
    // memory block = a single unit (byte) within memory, used to hold some value (ex: person)
    // memory address = the address of where a memory block is located (ex: house address)

    char a = 'X';
    char b = 'Y';
    char c = 'Z';

    printf("%d bytes\n", sizeof(a));
    printf("%d bytes\n", sizeof(b));
    printf("%d bytes\n", sizeof(c));

    printf("%p\n", &a);
    printf("%p\n", &b);
    printf("%p\n", &c); // each one of the memory locations are different, even though same amount of bytes

    return 0;
}