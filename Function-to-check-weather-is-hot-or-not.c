#include <stdio.h>

// Function to check if the weather is hot
void checkHotWeather(int temperature) {
    if (temperature > 30) {
        printf("It's hot weather.\n");
    } else {
        printf("It's not hot weather.\n");
    }
}

// Function to check if the weather is cold
void checkColdWeather(int temperature) {
    if (temperature < 15) {
        printf("It's cold weather.\n");
    } else {
        printf("It's not cold weather.\n");
    }
}

int main() {
    int temperature;

    // Input temperature
    printf("Enter the temperature: ");
    scanf("%d", &temperature);

    // Check weather conditions
    checkHotWeather(temperature);
    checkColdWeather(temperature);

    return 0;
}