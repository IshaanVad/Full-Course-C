#include <stdio.h>
#include <string.h>

// one way of using typedef
//typedef char user[25];

typedef struct // can use typedef for an entire struct
{
    char name[25];
    char password[12];
    int id;
} User;  // name of struct || instead of having to type "Struct User varName etc.", just have to use "User varName etc."

int main() {

    // typedef = reserved keyword that gives an existing datatype a "nickname"
    //           used for convenience

    /*
    char user1[25] = "Bro";
    // instead of typing this ^^
    user user1 = "Bro";
    // type this with "typedef char user[25] at the top of your code"
    */

    User user1 = {"Bro", "password123", 123456789};
    User user2 = {"Bruh", "password", 987654321};

    printf("%s\n", user1.name);
    printf("%s\n", user1.password);
    printf("%d\n", user1.id);
    printf("\n");
    printf("%s\n", user2.name);
    printf("%s\n", user2.password);
    printf("%d\n", user2.id);

    return 0;
}