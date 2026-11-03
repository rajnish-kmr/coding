// Take 3 numbers input and tell if they can be sides of a triangle
#include <stdio.h>
int main (){
int a,b,c;
printf ("Enter 3 Numbers : ");
scanf ("%d %d %d",&a,&b,&c);
// Sum of two sides is always greater than third
if ((a+b>c) && (a+c>b) && (b+c>a)){
    printf ("This Can be a Triangle\n");
}
else {
    printf ("This Can't be a Triangle\n");
}
    return 0;
}