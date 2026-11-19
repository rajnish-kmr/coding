//Wap to print sum of a given number and Reverse of a given number 
#include <stdio.h>
int main (){
int n;
printf ("Enter Your Number : ");
scanf ("%d",&n);
int ld; //last digit
int r =0; // reverse
int sum = 0;
if (n < 0) n = -n;
while (n>0){
    ld =n%10;
    r = r * 10;
    r = r + ld;
    n=n/10;
    sum = sum + ld;
}
    printf ("Sum of Digits of the numbers are : %d\n",sum);
    printf ("Reverse of the numbers are : %d\n",r);
    return 0;
}