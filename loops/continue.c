// Print all Odd numbers from 1 to 100 using continue
#include <stdio.h>
int main (){
    for (int i=1; i<=100; i++){
        if (i%2==0){
            continue; // if the if statement is true then usko skip kar deta hai 
            // jaise isme i = 2 daalenge to condition true hoga and usko continue skip kar dega 
        }
         printf ("%d ",i);
    }
    return 0;
}