#include <stdio.h>

// enum indentifier{...};
enum Day{Sun = 1, Mon = 2, Tue = 3, Wed = 4, Thu = 5, Fri = 6, Sat = 7};
// 0 based indexing, BUT you can set the indexes to whatever int desired

int main() {

    // enum = a user defined type of named integer indetifiers
    //        helps to make a program more readable

    enum Day today = Sun; // intializing enum (treated as an int)
    printf("%d\n", today); // prints the number 1 because Sun = 1

    if (today == Sun || today == Sat) { // easier to read, rather than "(today == 1 || today == 7)"
        printf("It's the weekend");
    } else {
        printf("It's not the weekend");
    }

    return 0;
}