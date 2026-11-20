// wap to print all the ascii value and their equivalent characters of all 26 characters using for or while loop
#include <stdio.h>
int main (){

    for (int i = 65;i<=90;i++){
        char ch = (char)i; 
        printf ("%c -> ",ch);
        printf ("%d\n",i);
        }
         return 0;
}



// what is typecasting ?
//    int x=65;
//    printf("%d\n",x);
//    char ch = (char)x;
//    printf("%c\n",x);
// or 
// char ch = 'A';
//    printf("%c\n",ch);
//    int x= (int)ch;
//    printf("%d\n",x);