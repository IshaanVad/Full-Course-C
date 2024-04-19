#include <stdio.h>

int main() {

    FILE *pF = fopen("test.txt", "r");

    char buffer[255]; // buffer (which can hold 255 characters rn), which acts a holder for the text within the file

    if (pF == NULL) { // means file can't be located
        printf("File couldn't be located");
    } else {
        while (fgets(buffer, 255, pF) != NULL) {
        printf("%s", buffer);
        }
    }

    fclose(pF);

    return 0;
}