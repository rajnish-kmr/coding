// take positive integer input and tell if it is divisible by 5 and 3 but not divisible by 15.
#include <stdio.h>
int main (){
int n;
printf("Enter a Number : ");
scanf ("%d",&n);
// if (n%5==0 || n%3==0){
//     if (n%15!=0){
//     printf ("The number is divisible by 5 or 3 but not 15\n");
//     }
//     else {
//     printf ("The number is NOT divisible by 5 or 3\n");
//     }
// }
if (n%15==0){
    printf ("The number is divisible by 15\n");
    }
else if ((n%5==0 || n%3==0) && (n%15!=0)){
    printf ("The number is divisible by 5 or 3 but not 15\n");
    }
else {
    printf ("The number is NOT divisible by 5 or 3\n");
}
return 0;
}
