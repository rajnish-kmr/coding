#include <stdio.h>
int main (){
    int n;
    printf ("Enter Number of rows : ");
    scanf ("%d",&n);
    for (int i=1; i<=n; i++){
        for (int j=1 ; j<=2*i-1; j=j+2){
        printf ("%d ",j);
    }
    printf ("\n");
    }
    return 0;
}

// pattern 
// Enter Number of rows : 6
// 1 
// 1 3 
// 1 3 5 
// 1 3 5 7 
// 1 3 5 7 9 
// 1 3 5 7 9 11 