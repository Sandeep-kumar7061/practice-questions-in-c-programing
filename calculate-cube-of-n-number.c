#include <stdio.h>

int main() {
    int n, cube;

    // Ask the user to enter a number
    printf("Enter an integer: ");
    scanf("%d", &n);

    // Calculate the cube of the number
    cube = n * n * n;

    // Display the result
    printf("The cube of %d is %d\n", n, cube);

    return 0;
}
