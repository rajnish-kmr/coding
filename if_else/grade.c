// Take input percentage of the student and print the grade the grade acc to the marks
// 
#include <stdio.h>
int main (){
    int n;
    printf ("Enter Your percentage : ");
    scanf ("%d",&n);

    if (n>=80 && n<=100) {
        printf ("Excellent\n");
    }
    else if (n>=60 && n<80){
        printf ("Good\n");
    }
    else if (n>=30 && n<60){
        printf ("Not Bad\n");
    }
    else {
        printf ("Fail\n");
    }
    return 0;
}