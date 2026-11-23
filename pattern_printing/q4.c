#include <stdio.h>
int main (){
    int n;
    printf ("Enter Number of rows : ");
    scanf ("%d",&n);
    for (int i=1; i<=n; i++){ // for rows 
        for (int j=1 ; j<=i; j++){// for columns
        printf ("%d ",j);
    }
    printf ("\n");
    }
    return 0;
}