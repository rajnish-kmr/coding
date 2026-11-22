// rectangle pattern  Where rows and column are equal
// nested loops
#include <stdio.h>
int main (){
    int n;
    printf ("Enter a Number : ");
    scanf ("%d",&n);
 for (int i=1; i<=n; i++){
    for (int i =1; i<=n; i++){
    printf ("*");
    }
    printf ("\n");
}
    return 0;
}