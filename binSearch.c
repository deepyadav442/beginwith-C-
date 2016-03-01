/*
Binary Search
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

int binarySearch(int a[], int s, int val)
{
    int x, y; //boundaries
    int m;//mid point
    
    x = 0;//lower boundary
    y = s-1;//higher boundary
    
    while(x <= y)
    {
        m = (x+y)/2;
        
        if(val == a[m])
        {
            return m;
        }
        else if(val < a[m])
        {
            y = m-1;
        }
        else if(val > a[m])
        {
            x = m+1;
        }
    }//while
    return -1; //not found
}


int main()
{
    int arr[6];
    int val;
    int indx;
    
    scanArray(arr, 6);
    displayArray(arr, 6);
    bubbleSort(arr,6);
    displayArray(arr, 6);
    printf("\n Enter the value to be searched ");
    scanf("%d", &val);
    
    indx = binarySearch(arr, 6, val);
    
    if(indx == -1)
        printf("\n %d is not found ", val);
    else
        printf("\n %d is found at index %d ", val, indx);
    return 0;
}
