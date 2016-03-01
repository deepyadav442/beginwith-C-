/*
 Bubble Sort
*/
#include<stdio.h> 

void scanArray(int a[], int s)//formal parameter
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

void bubbleSort(int a[] ,int s)
{
    int i, j;//for loop control
    int temp;//swapping
    
    for(i = s-1; i>0; i--)
    {
        for(j =0 ; j< i; j++)
        {
            if(a[j] > a[j+1])
            {//LHS element > RHS element
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }//if
        }//for(j ...
    }//for(i...
    
}//bubbleSort

int main()
{
    int arr[6];
    
    scanArray(arr, 6);
    displayArray(arr, 6);
    bubbleSort(arr,6);
    displayArray(arr, 6);
    
    return 0;
}
