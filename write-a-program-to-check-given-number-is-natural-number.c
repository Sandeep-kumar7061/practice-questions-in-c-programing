// Write a program to check given number is a natural or not
#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num <= 0)
    {
        printf("The number is not a natural number\n");
    }
    else
    {
        printf("The number is a natural number\n");
    }
    return 0;
}