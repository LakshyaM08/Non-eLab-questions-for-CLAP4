/*Write a Program to find greatest number in an array using pointers*/

#include <stdio.h> 
int main()
{
  int arr[5], *max, i, location = 1;
 
  printf("Enter any 5 integers in array\n");
 
  for ( i = 0 ; i < 5; i++ )
    scanf("%d", &arr[i]);
 
  max  = arr;
  *max = *arr;
 
  for (i = 1; i < 5; i++)
  {
    if (*(arr+i) > *max)
    {
       *max = *(arr+i);
       location = i+1;
    }
  }
 
  printf("Greatest integer is %d and is present at location number %d.",*max,location);
  return 0;
}