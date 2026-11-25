#include <stdio.h>
int main (){
    int n;
    printf ("Enter Odd Number of Rows: ");
    // Odd Number Preferred
    scanf ("%d",&n);
 for (int i=1; i<=n; i++){
    for (int j =1; j<=n; j++){
            int a = n/2+1; // for this pattern
        if (j==a || i==a){
            printf ("*");
        }
        else {
            printf (" ");
        }    
    }
    printf ("\n");
}
    return 0;
}
// Output
// Enter Odd Number of Rows: 7
//    *   
//    *   
//    *   
// *******
//    *   
//    *   
//    *  
