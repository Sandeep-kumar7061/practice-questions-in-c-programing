#include<stdio.h>
// write a function to find squae root of a number
float squareRoot(float n)
{
    float x = n;
    float y = 1;
    float e = 0.000001;
    while(x - y > e)
    {
        x = (x + y) / 2;
        y = n / x;
    }
    return x;
}
int main()
{
    float n;
    printf("Enter a number: ");
    scanf("%f", &n);
    printf("Square root of %f is %f\n", n, squareRoot(n));
    return 0;
}