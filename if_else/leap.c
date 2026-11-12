// Wap to determine whether a Year is Leap or NOT 
#include <stdio.h>
int main (){
    int n;
    printf("enter a Year : ");
    scanf ("%d",&n);
    if ((n%4==0 && n%100!=0) || (n%400==0)){
        //  && AND operator  || OR operator 
        printf("The Year is a Leap Year\n");
    }
    else {
        printf("The Year is NOT a Leap Year\n");
    }
    return 0;
}