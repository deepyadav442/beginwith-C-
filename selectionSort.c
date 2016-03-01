/*
 Selection Sort
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

void selectionSort(int a[] ,int s)
{
    int i, j;//for loop control
    int min;//index of element with minimum value
    int temp;//swapping
    
    for(i =0 ; i< s-1; i++)
    {
        min = i; //index of assumed minimum
        for(j = i+1; j< s; j++)//compare with rest of the elements in array
        {
            if(a[j] < a[min])
            {//on true
                min = j;//current minimum
            }
        }//for(j..
        
        if(i != min)
        {//assumed and actual minimum are different
            temp = a[i];
            a[i] = a[min];
            a[min]= temp;
        }
        
    }//for(i
    
}//selectionSort

int main()
{
    int arr[6];
    
    scanArray(arr, 6);
    displayArray(arr, 6);
    selectionSort(arr,6);
    displayArray(arr, 6);
    
    return 0;
}
