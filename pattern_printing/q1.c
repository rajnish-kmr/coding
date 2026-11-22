#include <stdio.h>
int main (){
    int n;
    printf ("Enter Number of rows : ");
    scanf ("%d",&n);
    for (int i=1; i<=n; i++){ // no of lines \ Rows -> i
        for (int j=1 ; j<=i; j++){ // no of columns -> j
        printf ("%d",i);
    }
    printf ("\n");
    }
    return 0;
}

// This Pattern
// 1
// 22
// 333
// 4444
// 55555
// 666666
// 7777777
// 88888888
// 999999999