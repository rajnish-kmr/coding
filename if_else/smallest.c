// Take 3 positive integers input and print the Smallest of them
#include <stdio.h>
int main (){
    int x,y,z;
    printf ("Enter 3 Numbers : ");
    scanf ("%d %d %d",&x, &y, &z);
    if (x==y && z==x && y==z){
        printf ("All Numbers are equal : %d\n",x);
    }
    else if (x<=y && x<=z){
        printf ("The Smallest of three is : %d\n",x);
    }
    else if (y<=x && y<=z){
        printf ("The Smallest of three is : %d\n",y);
    }
    else {
        printf ("The Smallest of three is : %d\n",z);
    }

    return 0;
}