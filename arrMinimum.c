/*
 Find minimum value in array
*/
#include<stdio.h> 

void scanArray(int a[], int s)
{
    int i;
    printf("\n enter %d values ", s);
    
    for(i =0; i< s; i++)
        scanf("%d", &a[i]);
}

void displayArray(int a[], int s)
{
    int i;
    printf("\n");
    
    for(i =0; i< s; i++)
        printf(" %d ", a[i]);
}


int minInArray(int a[], int s)
{
    int i;//for loop control
    int currentMinimum;//to hold minimum value
    
    currentMinimum = a[0]; //assumed
    for(i = 1; i< s; i++)
    {
        if(a[i] < currentMinimum)
            currentMinimum= a[i];
    }
    
    return currentMinimum;
}


int main()
{
    int arr[6];
    int x;

    scanArray(arr, 6);
    displayArray(arr, 6);
    
    x = minInArray(arr, 6);
    printf("\n %d is the minimum value in array", x);
    
    return 0;
}
