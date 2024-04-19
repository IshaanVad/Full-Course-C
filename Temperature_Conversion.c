#include <stdio.h>
#include <ctype.h>

int main() {

    char unit;
    float temp;

    printf("\nIs the temperature in (F) or (C)? ");
    scanf("%c", &unit);

    unit = toupper(unit);

    if (unit == 'F') {
        printf("Enter the temp in Fahrenheit: ");
        scanf("%f", &temp);
        temp = ((temp - 32) * 5) / 9;
        printf("Enter the temp in Celsius: %.1f", temp);
    } else if (unit == 'C') {
        printf("Enter the temp in Celsius: ");
        scanf("%f", &temp);
        temp = (temp * 9 / 5) + 32;
        printf("The temp in Fahrenheit: %.1f", temp);
    } else {
        printf("This isn't a valid option.");
    }

    return 0;
}