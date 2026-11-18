// Write a program to count digits of a given number
#include <stdio.h>
int main (){
long long int n;
int count = 0;
printf ("Enter a Number : ");
scanf ("%lld",&n);
if (n==0) {
    count = 1;
} else {
while (n!=0){
    n=n/10;
    count++;
}
}
    printf ("No of digits in this number are : %d\n",count);
    return 0;
}
// taken help from antigravity
// long long int ke liye %lld use karte hai 