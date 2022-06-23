/*Write a c program to implement arithmetic operations on pointers.*/

#include<stdio.h>
int main()
{
    int A = 4, B=6;
    int *ptr1, *ptr2;
    ptr1 = &A;
    ptr2 = &B;
 
    printf("Pointer ptr1 before Addition: ");
    printf("%p \n", ptr1);
 
    ptr1= ptr1 + 3;
    printf("Pointer ptr1 after Addition: ");
    printf("%p \n", ptr1);


    printf("Pointer ptr2 before Subtraction: ");
    printf("%p \n", ptr2);
 
    ptr2= ptr2 - 3;
    printf("Pointer ptr2 after Subtraction: ");
    printf("%p \n", ptr2);
 
    return 0;
}
