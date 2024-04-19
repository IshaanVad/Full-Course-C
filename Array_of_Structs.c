#include <stdio.h>
#include <string.h>

typedef struct // using typedef for convenience
{
    char name[12]; // max size of 12 bytes or characters
    float gpa;
} Student;

int main() {

    Student student1 = {"Spongebob", 3.0};
    Student student2 = {"Patrick", 2.5};
    Student student3 = {"Sandy", 4.0};
    Student student4 = {"Squidward", 2.0};

    Student students[] = {student1, student2, student3, student4};

    for (int i = 0; i < sizeof(students)/sizeof(students[0]); i++) {
        printf("Name: %-10s\t", students[i].name);
        printf("Gpa: %.2f\n", students[i].gpa);
    }

    return 0;
}