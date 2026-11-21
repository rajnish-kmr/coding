// print the factorial of a given number 'n'
#include <stdio.h>
int main (){
    int n;
    printf ("Enter a Number : ");
    scanf ("%d",&n);
    int product =1;
    for (int i=1;i<=n;i++){
        product = product * i;
    }
        printf ("The Factorial is %d\n",product);
    return 0;
}
// 5! = 5*4*3*2*1