#include <stdio.h>
#include <string.h>

int main() {

    char name[25]; // 25 bytes 
    int age;

    printf("\nWhat's your name? ");
    //scanf("%s", &name); // reads up to a white space, so you can't have a space
    fgets(name, 25, stdin); // deals with any white spaces
    name[strlen(name)-1] = '\0'; // deals with the extra space from 'stdin'

    printf("How old are you? ");
    scanf("%d", &age);

    printf("You're name is %s, and you are %d years old.", name, age);

    return 0;
}