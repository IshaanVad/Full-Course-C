#include <stdio.h>
#include <string.h>

int main() {

    char string1[] = "Bro";
    char string2[] = "Code";

    // strlwr(string1);                             converts a string to lowercase
    // strupr(string1);                             converts a string to uppercase
    // strcat(string1, string2);                    appends string2 to end of string1
    // strncat(string1, string2, 1);                appends n (the 3rd parameter) characters from string2 to string1
    // strcpy(string1, string2);                    copy string2 to string1
    // strncpy(string1, string2, 4);                copy n characters of string2 to string1

    // strset(string1, '?');                        sets all characters of a string to a given character
    // strnset(string1, 'x', 1);                    sets first n character of a string to a given character
    // strrev(string1);                             reverses a string

    // int result = strlen(string1);                returns a string's length as int
    // int result = strcmp(string1, string2);       string compare all characters
    // int result = strncmp(string1, string2, 1);   string compare n characters
    // int result = strcmpi(string1, string1);      string compare all (ignore case)
    // int result = strnicmp(string1, string1, 1);  string compare n characters (ignore case)

    return 0;
}