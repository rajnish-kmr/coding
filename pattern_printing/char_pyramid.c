#include <stdio.h>
int main (){
int n; 
printf ("Enter Number of lines : ");
scanf ("%d",&n);
int nsp =1;
int nst=n;
for (int i=1; i<=2*n+1; i++){
    char ch = (char)(i+64);
    printf ("%c",ch);
}
printf ("\n");
for (int i=1; i<=n; i++){
    int a=1;
for (int j=1; j<=nst; j++){//1 to n
    char ch = (char)(a+64);
    printf ("%c",ch);
    a++;
}
for (int k=1; k<=nsp; k++){//spaces
    printf (" ");
    a++;
}
for (int j=1; j<=nst; j++){
    char ch =(char)(a+64);
    printf ("%c",ch);
    a++;
}
nst--;
nsp+=2; // nsp = nsp + 2
printf ("\n");
}
return 0;
} 
// Output
// Enter Number of Rows : 4
// ABCDEFGHI
// ABCD FGHI
// ABC   GHI
// AB     HI
// A       I