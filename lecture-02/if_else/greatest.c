// Take 3 positive integers input and print the greatest of them
#include <stdio.h>
int main (){
    int x,y,z;
    printf ("Enter 3 Numbers : ");
    scanf ("%d %d %d",&x, &y, &z);
    if (x>=y && x>=z){
        printf ("The Greatest of three is : %d\n",x);
    }
    else if (y>=x && y>=z){
        printf ("The Greatest of three is : %d\n",y);
    }
    else if (z>=y && z>=x){
        printf ("The Greatest of three is : %d\n",z);
    }
    else if (x==y && z==x && y==z){
        printf (" All Numbers are equal \n");
    }


    return 0;
}