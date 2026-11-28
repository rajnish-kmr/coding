// Sum of two Numbers
#include <stdio.h>
int add (int a, int b){
    return a+b;
}
int main (){
    int a,b;
    printf ("Enter Two Numbers : ");
    scanf ("%d %d",&a,&b);
    int sum = add(a,b);
    printf ("Your Sum is : %d\n",sum);
    return 0;
}