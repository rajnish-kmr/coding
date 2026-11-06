// I am not sure that this code is right. My maths is not so good 

//given three points (x1,y1),(x2,y2),(x3,y3)
//WAP to check all three programs fall on one straight line
#include <stdio.h>
int main (){
    float x1,y1,x2,y2,x3,y3;
    printf ("Enter all the Points : ");
    scanf ("%f %f %f %f %f %f",&x1,&y1,&x2,&y2,&x3,&y3);
    float m1,m2;
    m1 = (y2-y1)/(x2-x1); //slope of AB
    m2 = (y3-y2)/(x3-x2); //slope of BC
    if (m1==m2){
        printf ("it will fall on one Straight line\n");
    }
    else {
        printf ("it will NOT fall on one Straight line\n");

    }
    return 0;
}