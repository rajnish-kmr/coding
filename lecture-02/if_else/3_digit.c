// Take positive integer input and tell if it is a three digit number or not 
#include <stdio.h>
int main (){
    int n;
    printf ("Enter a number : ");
    scanf ("%d",&n);
    if (n>99 && n<1000){ // AND operator = both statements should be true
        printf ("The Number is Three Digit Integer\n");
    }
    else {
        printf ("The Number is NOT A three Digit Integer\n");
    }
    return 0;
}