// program to print the smallest number of two
#include<stdio.h>
int main(){
    int num1, num2;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    if (num1<num2){
        printf("the smallest number is %d\n", num1);
    } else if (num2< num1){
        printf("The smallest number is %d\n",num2);
    } else {
        printf("Both number are equal. \n");
    }
    return 0;
}