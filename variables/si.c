// Wap to calculate simple interest
#include <stdio.h>
int main (){
float p,r,t,si;
// principal rate and time
printf("Enter Your : principal rate and time\n");
scanf("%f %f %f",&p, &r , &t);
// {scanf("%f\n%f\n%f\n",&p, &r , &t);} {this code is wrong:} Never put \n inside a scanf format string
// p=100,r=10,t=2;
si = (p*r*t)/100;
printf ("Your Simle Interest is : %f",si);
//formula si = (p*r*t) /100;

    return 0;
}