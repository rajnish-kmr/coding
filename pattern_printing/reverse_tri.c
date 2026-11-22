// nested loops
#include <stdio.h>
int main (){
    int n;
    printf ("Enter Number of rows : ");
    scanf ("%d",&n);
    for (int i=1; i<=n; i++){ // no of lines \ Rows -> i
        for (int j=1 ; j<=n+1-i; j++){ // no of columns -> j
        printf ("* ");
    }
    printf ("\n");
    }
    return 0;
}



// **Revise  (j<=n+1-1)

// Pattern
// Enter Number of rows : 9
// * * * * * * * * * 
// * * * * * * * * 
// * * * * * * * 
// * * * * * * 
// * * * * * 
// * * * * 
// * * * 
// * * 
// * 