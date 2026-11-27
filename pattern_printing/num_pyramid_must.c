#include <stdio.h>
int main (){
int n; 
printf ("Enter Number of lines: ");
scanf ("%d",&n);
int nsp =1;
int nst=n;
for (int i=1; i<=n+1; i++){
    printf ("%d",i);
}
    for (int i=n; i>=1; i--){
    printf ("%d",i);
    }
printf ("\n");
for (int i=1; i<=n; i++){
for (int j=1; j<=nst; j++){
    printf ("%d",j);
}
for (int k=1; k<=nsp; k++){//spaces
    printf (" ");
}
for (int j=nst; j>=1; j--){
    printf ("%d",j);
    
}
nst--;
nsp+=2; // nsp = nsp + 2
printf ("\n");
}
return 0;
}
// Output
// Enter Number of Rows : 4
// 123454321
// 1234 4321
// 123   321
// 12     21
// 1       1