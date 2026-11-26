// Star Pyramid
#include <stdio.h>
int main (){
     int n;
     printf ("Enter Number of rows : ");
     scanf ("%d",&n);
     for (int i =1; i<=n; i++){
        for (int k=1 ; k<=n-i; k++){ // For Spaces
            printf (" ");  // space
        }
        for (int j=1; j<=(2*i)-1; j=j+1){
            printf("*");
        }
            printf("\n");
    }

    return 0;
}

// Output
// Enter Number of rows : 4
//    *
//   ***
//  *****
// *******