#include <stdio.h>
int main (){
    int n;
    printf ("Enter a Number : ");
    scanf ("%d",&n);
 for (int i=1; i<=n; i++){
    int a = 1;
     for (int j =1; j<=i; j++){
        int d = a + 64; // d= 65
        char ch = (char)d; // ch = (char)65 -> ch = 'A'
    printf ("%d ",j);
    printf ("%c ",ch);
    a++;
    }
    printf ("\n");
}
    return 0;
}
// Pattern
// Enter a Number : 4
// 1 A 
// 1 A 2 B 
// 1 A 2 B 3 C 
// 1 A 2 B 3 C 4 D 