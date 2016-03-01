#include<stdio.h> 
// to declare, scan, display array

int main()
{   
    //declare an int array of size 5
    int arr[5];
    
    int i; //for loop control and array element index representation
    printf("Enter 5 numbers ");
/*    
    scanf("%d", &arr[0]);
    scanf("%d", &arr[1]);
    scanf("%d", &arr[2]);
    scanf("%d", &arr[3]);
    scanf("%d", &arr[4]);
*/    
    
    for(i =0; i< 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    printf("\n");
    for(i =0; i< 5; i++)
    {
        printf(" %d ", arr[i]);
    }
    
    return 0;
}
