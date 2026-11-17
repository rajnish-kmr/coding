// Predict the output
#include <stdio.h>
int main (){
int x = 4,y,z;
y = --x; // pahle x= 3 hoga then y =3
z = x--; // pahle z=3 then x will become 2
printf ("%d\n%d\n%d\n",x,y,z);
    return 0;
}