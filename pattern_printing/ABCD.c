#include <stdio.h>
int main (){
    int n;
    printf ("Enter a Number : ");
    scanf ("%d",&n);
 for (int i=1; i<=n; i++){
    int a = 1;
    for (int j =1; j<=n; j++){
        int d = a + 64; // d= 65
        char ch = (char)d; // ch = (char)65 -> ch = 'A'
    printf ("%c ",ch);
    a++;
    }
    printf ("\n");
}
    return 0;
}
// Output
// Enter a Number : 7
// A B C D E F G 
// A B C D E F G 
// A B C D E F G 
// A B C D E F G 
// A B C D E F G 
// A B C D E F G 
// A B C D E F G 