// Take 4 positive integers input and print the greatest of them
#include <stdio.h>
int main (){
    int x,y,z,m;
    printf ("Enter 4 Numbers : ");
    scanf ("%d %d %d %d",&x, &y, &z, &m);
    if (x == y && y == z && z == m ){
        printf (" All Numbers are equal : %d\n",x);
    }

    else if (x>=y && x>=z && x>=m){
        printf ("The Greatest of four is : %d\n",x);
    }
    else if (y>=x && y>=z && y>=m){
        printf ("The Greatest of four is : %d\n",y);
    }
    else if (z>=y && z>=x && z>=m){
        printf ("The Greatest of four is : %d\n",z);
    }
    else {
        printf ("The Greatest of four is : %d\n",m);

    }

    return 0;
}