// Square root of a Number
#include <stdio.h>
#include <math.h>
int main (){
    int a; 
    printf ("Enter  a Number : ");
    scanf ("%d",&a);
    double root = sqrt(a);
    printf ("your Square root is :%.2lf\n",root); // .2lf for double
    return 0;
}