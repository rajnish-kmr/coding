// Predict the output
// while loop
#include <stdio.h>
int main (){
    int j; // j ki value assign na karne par usko garbage value assign ho jata hai 
    // in my case j has been assigned 0 so i am getting 0 to 10 as ouput
    while (j<=10){
         printf ("\n%d ",j);
         j=j+1;
    }
         return 0;
}