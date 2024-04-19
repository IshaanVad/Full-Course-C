#include <stdio.h>

int main() {

    // continue = skips rest of code & forces the next iteration of the loop
    // break = exits a loop/switch

    for (int i = 0; i < 20; i++) {
        if (i == 13) {
            //continue;             // skips the index and moves on to the next index
            break;                  // completely exits the for loop
        }
        printf("%d\n", i);
    }

    return 0;
}