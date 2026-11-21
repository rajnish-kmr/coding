// wap to find value of 1 number raised to the power till another
#include <stdio.h>
int main (){
    int a,b;
    int p=1; //power
    printf ("Enter two Number : ");
    scanf ("%d%d",&a,&b);
    for (int i=1;i<=b;i++){
        p= p * a;
        printf ("%d raised to the power %d is %d\n",a,i,p);
    }
    return 0;
}