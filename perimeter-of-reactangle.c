//To calculate perimeter of reactangle

#include <stdio.h>

int main() {
    float a, b, perimeter;

    // Ask the user to enter the lengths of the sides
    printf("Enter the length of side a: ");
    scanf("%f", &a);

    printf("Enter the length of side b: ");
    scanf("%f", &b);

    // Calculate the perimeter
    perimeter = 2 * (a + b);

    // Display the perimeter
    printf("The perimeter of the rectangle is: %.2f\n", perimeter);

    return 0;
}
