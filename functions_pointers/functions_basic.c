#include <stdio.h>
void america (){
    printf ("you are in America\n");
    return;
}
void australia (){
    printf ("you are in Australia\n");
    america(); // functional call america
    return;
}
void india (){
    printf ("you are in India\n");
    australia(); // functional call australia
    return;
}
int main (){
    india(); // function call india
    return 0;
}
// jis function ko call kar rahe hai wo uske upar hi likha hona chahiye