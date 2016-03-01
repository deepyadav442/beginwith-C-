/*
Revision of : Arrays, functions, pass by value, pass by reference, return, array initializers
*/

#include<stdio.h> 

int addElements(int a[], int s)
{
    int i;
    int sum = 0;
    for(i =0 ; i< s; i++)
        sum = sum + a[i];
    
    return sum;
}//addElements

int main()
{
  int arr1[] = {10,20,30,40,50 };//array takes the size == number of values used in initializer
  int arr2[] = {10,20,30};//array takes the size == number of values used in initializer
  
  int i;//for loop control
  int tot1, tot2; //for addition
  
  tot1 = addElements(arr1, 5);
  tot2 = addElements(arr2, 3);
  
  printf("\n");
  for(i =0; i< 5; i++)
      printf(" %d ", arr1[i]);
  
  printf("\n Addition of array values : %d ", tot1);
  
  printf("\n");
  for(i =0; i< 3; i++)
      printf(" %d ", arr2[i]);
  
  printf("\n Addition of array values : %d ", tot2);
  
  
  return 0;
}
