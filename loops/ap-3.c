// Display this AP 100 97 94 91 .....upto all terms which are Positive 
#include <stdio.h>
int main (){
// int n;
// printf ("Enter a number : ");
// scanf ("%d",&n);
int a = 100;
for (int i = 1; a>0; i++){ //for loop me i variable ke alawa bhi variable print kar sakte hai
    printf ("%d ",a);
    a = a-3;
}
    return 0;
}