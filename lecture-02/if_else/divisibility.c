// Question : Take positive integer input and tell if it is divisible by 5 or not
#include <stdio.h>
int main (){
    int n;
    printf ("Enter a Number : ");
    scanf ("%d",&n);
    if (n%5==0){
        printf ("The Number is divisible by 5\n");
    }
    else {
        printf ("The number is NOT Divisible by 5\n");
    }
    return 0;
}