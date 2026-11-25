#include <stdio.h>
int main (){
    int n;
    printf ("Enter Number of Rows : ");
    scanf ("%d",&n);
 for (int i=1; i<=n; i++){
    int a = 1;
     for (int j =1; j<=i; j++){
        int d = a + 64; // d= 65
        char ch = (char)d; // ch = (char)65 -> ch = 'A'
        if (i%2!=0){ // for odd no
        printf ("%d ",a);
        }
        else {
        printf ("%c ",ch);
        }
            a++;
    }
    printf ("\n");
}
    return 0;
}
// output 
// Enter a Number : 6
// 1 
// A B 
// 1 2 3 
// A B C D 
// 1 2 3 4 5 
// A B C D E F