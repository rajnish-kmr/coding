// Wap to calculate simple interest
#include <stdio.h>
int main (){
float p,r,t,si;
// principal rate and time
printf("Enter Your : principal rate and time\n");
scanf("%f\n%f\n%f",&p, &r , &t);
// {scanf("%f\n%f\n%f\n",&p, &r , &t);} {this code is wrong:} scanf function me last format specifier ke baad \n nhi lagana chahiye , lagane pe wo phir se input maangta hai correct code is :  scanf("%f\n%f\n%f",&p, &r , &t);
// p=100,r=10,t=2;
si = (p*r*t)/100;
printf ("Your Simle Interest is : %f",si);
//formula si = (p*r*t) /100;

    return 0;
}