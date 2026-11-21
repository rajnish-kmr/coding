// print the factorial of first 'n' numbers
// agar input 5 lenge to 1 to 5 sabka factorial  batayega
#include <stdio.h>
int main (){
    int n;
    printf ("Enter a Number : ");
    scanf ("%d",&n);
    int product =1;
    for (int i=1;i<=n;i++){
        product = product * i;
        printf ("The Factorial of %d is %d\n",i,product);
    }
    return 0;
}