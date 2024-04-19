#include <stdio.h>
#include <string.h>

struct Player // creation of a struct
{
    char name[12];
    int score;
};

int main() {

    // struct = collection of related memebers ("variables")
    //          they can be of different data types
    //          listed under one name in a block of memory
    //          VERY SIMILAR to classes in other languages (but structs don't have methods)

    struct Player player1; // initializing the struct
    struct Player player2;

    strcpy(player1.name, "Bro"); // the . is a member access modifer
    player1.score = 4;

    strcpy(player2.name, "Bruh");
    player2.score = 5;

    printf("%s ", player1.name);
    printf("%d\n", player1.score);

    printf("%s ", player2.name);
    printf("%d\n", player2.score);

    return 0;
}