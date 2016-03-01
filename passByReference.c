/*
Array as parameter 
------------------ 
Refer about functions.txt
See the diagram
 
 */

#include<stdio.h> 

void fn(int a[])//a[] is a formal parameter, it becomes a reference to the actual parameter array
{//attempt to write a[]
    printf("\n a : %x ", a);
    a[1] = 99; // is equivalent to arr[1] = 99;
}

int main()
{
    int arr[4] = {1, 3, 7, 12};//array elements to initialize as 1, 3, 7, 12
    int i;
    
    printf("\n");
    for(i =0 ; i< 4; i++)
        printf(" %d ", arr[i]);
    
    printf("\n arr : %x ", arr);
    fn(arr);//passing array as an actual parameter to the function
    
    printf("\n");
    for(i =0 ; i< 4; i++)
        printf(" %d ", arr[i]);
    
    return 0;
}
