#include <stdio.h>

int main() {

    FILE *pF = fopen("test.txt", "w");
    // first param. : can put file path to specific txt, html, etc. desired
    // second param. : "w" = write , "a" = append , "r" = read

    fprintf(pF, "Hello World\n");

    fclose(pF);

    /*
    if (remove("test.txt") == 0) { // if file is deleted successfully, will return 0
        printf("That file was deleted.");
    } else {
        printf("That file was not deleted.");
    }
    */

    return 0;
}