/*
Insertion Sort
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

void insertionSort(int a[] ,int s)
{
    int i, j;//for loop control
    int temp;//swapping
    
    for(i = 1; i< s; i++)
    {
        temp = a[i];//current element to be inserted
        for(j = i-1; j>=0; j--)
        {
            if(temp < a[j])
            {//shift
                a[j+1] = a[j];
            }
            else
            {
                break;//stop j loop
            }
        }//for(j...
        
        a[j+1] = temp; //insertion
    }//for(i ...
    
}//insertionSort

int main()
{
    int arr[6];
    
    scanArray(arr, 6);
    displayArray(arr, 6);
    insertionSort(arr,6);
    displayArray(arr, 6);
    
    return 0;
}
