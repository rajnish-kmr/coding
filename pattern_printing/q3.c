#include <stdio.h>
int main (){
    int n;
    printf ("Enter Number of rows : ");
    scanf ("%d",&n);
    for (int i=1; i<=n; i++){ // for rows 
        for (int j=1 ; j<=n+1-i; j++){// for columns
        printf ("%d ",j);
    }
    printf ("\n");
    }
    return 0;
}


// Enter Number of rows : 4
// 1 2 3 4 
// 1 2 3 
// 1 2 
// 1 