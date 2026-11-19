//Wap to print Reverse of a given number 
#include <stdio.h>
int main (){
int n;
printf ("Enter Your Number : ");
scanf ("%d",&n);
int ld; //last digit
int r =0; // reverse
while (n>0){
    ld =n%10; 
    r = r * 10; 
    r = r + ld;
    n=n/10;
}
    printf ("Reverse of the numbers are : %d\n",r);
    return 0;
}