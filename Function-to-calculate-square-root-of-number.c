// Function to calculate square root
#include<stdio.h>
#include<math.h>

double squareRoot(double number) {
   return sqrt(number);
}

int main() {
    double number;

    printf("Enter a number: ");
    scanf("%lf", &number);

    if (number < 0) {
        printf("Square root of a negative number is not real!\n");
    } else {
        printf("Square root of %.2f is %.5f\n", number, squareRoot(number));
    }

    return 0;
}