/*
Sequential Search
-----------------
refer about sequential search.txt  
see the diagram 
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


int seqSearch(int a[], int s, int x)
{
    int i;
    //i =0  : begin with first element
    //i < s : go upto the end of array
    //i++ : sequential
    for(i =0; i< s; i++)
    {
        if(a[i] == x) //comparison for equality
        {
            return i; //index of matching element
        }
    }//for
    
    //no match
    return -1;
}

int main()
{
    int arr[6];
    int x, pos;

    scanArray(arr, 6);
    displayArray(arr, 6);
    
    printf("\n Enter the value to search ");
    scanf("%d", &x);
    
    pos = seqSearch(arr, 6, x);
    
    if(pos == -1)
        printf("\n %d not found ", x);
    else
        printf("\n %d found at index %d ", x, pos);
    
    return 0;
}
