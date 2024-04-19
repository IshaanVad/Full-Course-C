#include <stdio.h>
#include <string.h>

int main() {

    char x = 'X';
    char y = 'Y';

    // how to swap vars (not strings)
    char tempVar;
    tempVar = x;
    x = y;
    y = tempVar;

    printf("x = %c\n", x);
    printf("y = %c\n", y);

    // how to swap vars (strings)
    char a[15] = "Water"; // Note: make sure the String are within the same size in the array
    char b[15] = "Lemonade";

    char tempString[5];
    strcpy(tempString, x);
    strcpy(x, y);
    strcpy(y, tempString);

    printf("a = %s\n", a);
    printf("b = %s\n", b);

    return 0;
}