// Hollow Rectangle
#include <stdio.h>
int main (){
    int n,m;
    printf ("Enter Number of Rows : ");
    scanf ("%d",&n);
    printf ("Enter Number of columns : ");
    scanf ("%d",&m);
    for (int i=1; i<=n; i++){ // outer loop - for rows
        for (int j=1; j<=m; j++){ // inner loop -- for columns
            if (i==1 || j==1 || i==n || j==m){
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