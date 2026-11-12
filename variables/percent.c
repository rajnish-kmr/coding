// WAP to calculate percentage out of 5 subjects while taking input from user  
#include <stdio.h>
int main (){
int sub1, sub2, sub3, sub4, sub5;
float percentage;
printf ("Enter your all 5 subject marks :");
//for taking input from user we "use scanf" function
//in scanf fn we use format specifier under double quotes and then comma and use & symbol before each variable.
// ex- scanf("%d",&variable); 
scanf ("%d %d %d %d %d",&sub1, &sub2, &sub3, &sub4, &sub5);
//formula = (obtained marks / 500) * 100
percentage = ( ((sub1 + sub2 + sub3 + sub4 + sub5) /500.0 )*100.0 );
printf ("%f\n",percentage);

    return 0;
}