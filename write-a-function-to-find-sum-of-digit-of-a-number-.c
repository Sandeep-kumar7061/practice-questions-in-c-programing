# include<stdio.h>
// function to find sum of digit of a number
int sum_of_digit(int n);
int main()
{
    int num;
    printf("Enter a  number:");
    scanf("%d",&num);
    printf("sum of digit of %d is %d",num ,sum_of_digit(num));
    return 0;
}
int sum_of_digit(int n)
{
    if(n==0)
    return 0;
    return (n%10+sum_of_digit(n/10));
}