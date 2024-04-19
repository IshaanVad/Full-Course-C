#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    // pseudo random numbers = A set of balues or elements that statistically random
    //                         (Don't use these for any sort of cryptographic secruity)

    srand(time(0)); // must have this seed

    int number1 = (rand() % 6) + 1; // gives number between 0 and 32,767, BUT using "% ... + 1",
                                    // can set the max number wanted and the "+ 1" means from 1 to something (not 0)

    printf("%d", number1);
    
    return 0;
}
