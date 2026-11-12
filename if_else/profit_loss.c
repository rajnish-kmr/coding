// Wap to determine whether seller has made profit or loss
// Also determine how much profit or loss he has incurred
#include <stdio.h>
int main (){
int cp , sp ;

printf ("Enter Cost Price in Rupees : ");
scanf ("%d",&cp);

printf ("Enter Selling Price  in Rupees : ");
scanf ("%d",&sp);

int profit , loss ;
profit = sp - cp;
loss = cp - sp;


if (sp > cp ){
    printf ("Profit\n");
    printf ("Profit is : %d Rupees\n",profit);
}
if (cp > sp ) {
    printf ("Loss\n");
    printf ("Loss is : %d Rupees\n",loss);
}
if (sp == cp ) {
    printf ("No Profit No Loss\n");
}
    return 0;
}