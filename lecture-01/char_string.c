// Char data type 
#include <stdio.h>
// to use [] string we have to include this header file stdbool.h too
#include <stdbool.h>
int main (){
// char grade = 'a';
// printf ("your grade is %c\n",grade);
// to store more than a character in char we strings [] it can store more than 1 character
// an array can store more than 1 value
	char name [] = "rajnish";
	char fruit [] = "apple";
// use %s as format specifier
	printf("%s\n",name );
	printf("%s\n",fruit );
	return 0;
}