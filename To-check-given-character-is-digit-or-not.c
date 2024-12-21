// To check given character is digit or not
#include <stdio.h>
#include <ctype.h> // for isdigit()

int main() {
    char input;

    printf("Enter a character: ");
    scanf("%c", &input);

    if (isdigit(input)) {
        printf("The character '%c' is a digit.\n", input);
    } else {
        printf("The character '%c' is not a digit.\n", input);
    }

    return 0;
}
