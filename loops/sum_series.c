// Write a program to print sum of this series 1-2+3-4+5-6+7........ upto 'n'
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
    n=n/10;
    sum = sum + ld;
}
    printf ("Sum of Digits of the numbers are : %d\n",sum);
    return 0;
}