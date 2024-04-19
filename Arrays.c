#include <stdio.h>

int main() {

    // array = a data structure that can store many values of the same data type

    char name[] = "Bro"; // char array = string

    // 2 ways to intialize an array:
    double prices[] = {5.0, 10.0, 15.0, 25.0, 20.0};
    /*
    double prices[5]; // length of 5
    prices[0] = 5.0;
    prices[1] = 10.0;
    prices[2] = 15.0;
    prices[3] = 25.0;
    prices[4] = 20.0;
    */

    // printf("%lf\n", prices[0]); // 0 based indexing
    // printf("%lf\n", prices[1]);
    
    // accessing an array with a for loop
    for (int i = 0; i < sizeof(prices)/sizeof(prices[0]); i++) {
    // sizeof() gives the amount of bytes within the array
    //[must divide by sizeof(one of the array indexes) so you won't have too many spots]
        printf("$%.2lf\n", prices[i]);
    }

    return 0;
}