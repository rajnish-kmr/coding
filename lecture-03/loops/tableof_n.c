// Print the table of 'n' where n is the user input
#include <stdio.h>
int main (){
    int n;
    printf ("enter a number : ");
    scanf ("%d",&n);
    // take x as a new variable for storing the 10th place of the table
    int x;
    x = (n)*(10);
    for (int i=1; i<=x; i++){
        if (i%n==0) printf ("%d ",i);
    }
    return 0;
}