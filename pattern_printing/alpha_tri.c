// Alphabet Triangle 
#include <stdio.h>
int main (){
    int n;
    printf ("Enter Number of rows : ");
    scanf ("%d",&n);
    for (int i=1; i<=n; i++){ 
        for (int j=1 ; j<=n-i; j++){ // For Spaces
            printf (" ");  // space
        }
        int a =1;
        for (int k=1; k<=i; k++){
        int d = a + 64; // d= 65
        char ch  = (char)d;
            printf ("%c",ch); 
            a++;
            
    }
    printf ("\n");
    
}
    return 0;
}