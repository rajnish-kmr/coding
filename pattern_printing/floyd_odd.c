// Floyd's Triangle
#include <stdio.h>
int main (){
    int n;
    printf ("Enter Number of Rows : ");
    scanf ("%d",&n);
    int  a=1;
    for (int i=1; i<=n; i++){
        for (int j=1; j<=i; j++){
            if ("n")
            printf ("%d ",a);
            a=a+2;
        }
        printf ("\n");
    }
    return 0;
}