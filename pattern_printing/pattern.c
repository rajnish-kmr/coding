// pattern Printing 
// nested loops
#include <stdio.h>
int main (){
    int n,m;
    printf ("Enter Number of Rows : ");
    scanf ("%d",&n);
    printf ("Enter Number of columns : ");
    scanf ("%d",&m);
 for (int i=1; i<=n; i++){ // outer loops -> no of lines / Rows
    for (int i =1; i<=m; i++){ // inner loops -> no of stars in each line / columns
    printf ("*");
    }
    printf ("\n");
}
    return 0;
}