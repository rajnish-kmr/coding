// WAp to print hello world n times take 'n' as input from user
#include <stdio.h>
int main (){
    int n;
    printf ("enter How many times you want to print the Output : ");
    scanf ("%d",&n);
    for (int i=1 ; i<=n; i++){
        printf ("%d. Hello World\n",i);
    }
    return 0;
}