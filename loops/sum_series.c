// Write a program to print sum of this series 1-2+3-4+5-6+7........ upto 'n'
// odd -- add , even -- subtract
#include <stdio.h>
int main (){
long long int n;
int sum = 0;
printf ("Enter a Number : ");
scanf ("%lld",&n);
// int ld; // Last digit(ld)
for (int i=1;i<=n;i++){
     if (i%2 !=0) sum = sum + i;
     else sum = sum - i;
}
    printf ("Sum of Digits of the numbers are : %d\n",sum);
    return 0;
}