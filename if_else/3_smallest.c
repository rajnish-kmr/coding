// Take 3 positive integers input and print the smallest of them
// By if else ladder/nested
#include <stdio.h>
int main (){
    int x,y,z;
    printf ("Enter 3 Numbers : ");
    scanf ("%d %d %d",&x, &y, &z);
    if (x==y && z==x && y==z){
        printf ("All Numbersd are equal : %d\n",x);
    }
    else if (x<y){
        if (x<z)
        printf ("%d is smallest \n",x);
        else
        printf ("%d is smallest \n",z);
    }
    else if (y<z)
        printf ("%d is smallest \n",y);
    else
        printf ("%d is smallest \n",z);
    return 0;
}