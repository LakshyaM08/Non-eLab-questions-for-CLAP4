/*Write a C program to sort the list of n numbers using pass by reference.*/

#include <stdio.h>

void sort(int n, int* ptr)
{    int i, j, t;
    for (i = 0; i < n; i++) {  
        for (j = i + 1; j < n; j++) {  
            if (*(ptr + j) < *(ptr + i)) {  
                t = *(ptr + i);
                *(ptr + i) = *(ptr + j);
                *(ptr + j) = t;
            }
        }
    }
    for (i = 0; i < n; i++)
        printf("%d ", *(ptr + i));
}
  

int main()
{
    int n = 7;
    int arr[] = { 0, 20, 17, 32, 7, 19, 77 }; 
    sort(n, arr);
    return 0;
}