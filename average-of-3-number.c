// average of three number
#include <stdio.h>
int main() {
    int digit1, digit2, digit3;
    float average;

    // Prompt the user to enter three digits
    printf("Enter the first digit: ");
    scanf("%d", &digit1);

    printf("Enter the second digit: ");
    scanf("%d", &digit2);

    printf("Enter the third digit: ");
    scanf("%d", &digit3);

    // Calculate the average of the three digits
    average = (digit1 + digit2 + digit3) / 3.0;

    // Display the result
    printf("The average of %d, %d, and %d is %.2f\n", digit1, digit2, digit3, average);

    return 0;
}