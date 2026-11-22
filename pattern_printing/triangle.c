// Star Triangle
// nested loops
#include <stdio.h>
int main (){
    int n;
    printf ("Enter Number of rows : ");
    scanf ("%d",&n);
    for (int i=1; i<=n; i++){ // no of lines \ Rows -> i
        for (int j=1 ; j<=i; j++){ // no of columns -> j
        printf ("* ");
    }
    printf ("\n");
    }
    return 0;
}



// or


// #include <stdio.h>
// int main (){
//     int n;
//     printf ("Enter Number of Rows : ");
//     scanf ("%d",&n);
//     for (int i = n; i >=1 ; i--){
//         for (int j=n; j>=i; j--){
//             printf ("* "); 
//         }
//         printf ("\n");
//     }
//     return 0;
// }