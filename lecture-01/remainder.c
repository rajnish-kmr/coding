// Question : Take two integers input a and b:a>b, and find the remainder when a is divided by b and print the remainder.

#include<stdio.h>
int main(){
    int a,b; // a > b
    printf("Enter Dividend : ");
    scanf("%d",&a);
    printf("Enter Divisor : ");
    scanf("%d",&b);
    // int q = a/b;
    // int r = a - b*q; // Divisor * Quotient + Remainder = Dividend
    // printf("The Remainder when %d is divided by %d is : %d",a,b,r);
    int r = a % b;
    //    % is  modulo operator  : it gives the remainder
    printf("The Remainder when %d is divided by %d is : %d\n",a,b,r);
    return 0;
}