/*Write a C program using functions to return the ASCII value of a character entered.*/

#include <stdio.h>
int asc(char ch){
    printf("The ASCII value of %c is %d", ch,ch);
    return 0;   
}

int main()
{
	char c;
    int result;
    printf("Enter character : ");
    scanf("%c",&c);
    result=asc(c);
	return 0;
}
