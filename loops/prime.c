// Wap to check a number is prime or not
#include <stdio.h>
int main (){
    int n;
    printf ("Enter a Number :");
    scanf ("%d",&n);
    int a =0;
    for (int i=2; i<=n-1; i++){
        if (n%i==0) {
        a=1;
        break; // Break statement use kiya jata hai jab conditions fullfill ho jata hai and aage loop run karne ki jarurat na ho
        }
    }
        if (n==1) printf ("the number is neither prime nor composite");
        else if (n==0)     
        printf ("Composite Number\n"); 
        else{
         printf ("prime Number\n");
        }
    
    return 0;
}