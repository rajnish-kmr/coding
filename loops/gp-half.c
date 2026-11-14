// Display this Gp 100, 50 , 25 .....upto 'n' terms
#include <stdio.h>
int main (){
int n;
printf ("Enter a number : ");
scanf ("%d",&n);
float a = 100.0;
for (int i = 1; i<=n ; i++){
    printf ("%.2f ",a);
    a = (a/2);
}
    return 0;
}