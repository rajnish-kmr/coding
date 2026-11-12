// if_else Statements
// Question : Take positive integer input and tell if it is even or odd
// == means equal to and != means not equal to
#include <stdio.h>
int main (){
int n;
printf ("Enter a Number : ");
scanf ("%d",&n);
if(n%2==0){
    printf("Even Number\n");
} 
// if(n%2!=0){
//     printf("Odd Number\n");
// } 
else {
    printf ("Odd Number\n");
}
    return 0;
}