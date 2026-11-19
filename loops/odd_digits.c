// Write a program to print sum of all the Odd digits of a given number
#include <stdio.h>
int main (){
long long int n;
int sum = 0;
printf ("Enter a Number : ");
scanf ("%lld",&n);
int ld; // Last digit(ld)
if (n<0) n=-n;
while (n!=0){
    ld = n%10; // Last digit(ld)
    if(ld%2!=0){
    sum = sum + ld;
    n=n/10;
    }
    else {
        n=n/10;
    }
}
    printf ("Sum of Digits of the numbers are : %d\n",sum);
    return 0;
}