#include <stdio.h>
int main (){
int n; 
printf ("Enter Number of Rows : ");
scanf ("%d",&n);
int nsp=n-1; // nsp -- no of spaces
for (int i=1; i<=n; i++){
    for (int q=1; q<=nsp; q++){ // for spaces
        printf (" ");
    }
        nsp--;
    for (int j=1; j<=i; j++){ // number triangle
        char ch = (char)(j+64);
        printf ("%c",ch);
    }
    int a=i-1;
    for (int k=1; k<=i-1; k++){
        char ch = (char)(a+64);
        printf ("%c",ch);
        a--;
    }
    printf ("\n");
    }
    return 0;
}

//used typecasting