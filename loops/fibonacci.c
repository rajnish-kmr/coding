// print the nth fibonacchi number 
// 1 1 2 3 5 8 13 21 ..... 
#include <stdio.h>
int main (){
    int n;
    printf ("Enter a Number : ");
    scanf ("%d",&n);
    int a=1,b=1,sum =1;
    // int fi; // fi = fibonacchi
    for (int i=1;i<=n-2;i++){
        sum = a+b;
        a=b;
        b=sum;
    }
        printf ("The fibonacchi of %dth is %d\n",n,sum);
    return 0;
}