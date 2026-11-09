// Print the table of 19 
#include <stdio.h>
int main (){
    // METHOD 1
    // for (int i=1; i<=190; i++){
    //     if (i%19==0) printf ("%d ",i);
    // }
    // METHOD 2
    for (int i=19; i<=190; i = i + 19){
        printf ("%d ",i);
    }
    return 0;
}