// Star Cross
// n is odd
#include <stdio.h>
int main (){
    int n,m;
    printf ("Enter Number of Rows : ");
    scanf ("%d",&n);
    for (int i=1; i<=n; i++){ // outer loop - for rows
        for (int j=1; j<=n; j++){ // inner loop -- for columns
            if (i==j || i+j== n+1){
                printf ("* ");
            }
            else {
                printf (" ");
            }

        }
        printf ("\n");
    }

    
    return 0;
}