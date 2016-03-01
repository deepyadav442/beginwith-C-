/*
Array Initializer
---------------  
Array initializer is used to assign some 
default values to the elements
of the array while declaration. 
 
See the examples: 
 */
#include<stdio.h> 

int main()
{
    int arr[4] = {};//array elements to initialize as 0, 0, 0, 0
    //int arr[4] = {1, 3};//array elements to initialize as 1, 3, 0, 0
    //int arr[4] = {1, 3, 7};//array elements to initialize as 1, 3, 7, 0
    //int arr[4] = {1, 3, 7, 12};//array elements to initialize as 1, 3, 7, 12
    //int arr[4] = {1, 3, 7, 12, 20};//ERROR : TOO MANY VALUES IN INITIALIZER
    int i;
    
    printf("\n");
    for(i =0 ; i< 4; i++)
        printf(" %d ", arr[i]);
    
    return 0;
}
