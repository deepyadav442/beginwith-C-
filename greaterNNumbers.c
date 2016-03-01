#include<stdio.h> 
/*
program to compare n numbers
and find the greatest
*/

int main()
{   
    int n;//count
    int i;//loop controlling variable
    int x;//input
    int max;//greatest
    
    printf("How many numbers to compare ");
    scanf("%d", &n);

    //loop n times
    for(i = 1; i<=n; i++)
    {
        printf("Enter number %d ", i);
        scanf("%d", &x);//10,5,12,80
        
        if(i == 1)
        {//first cycle : direct assignment
            max = x;
        }
        else
        { //rest of the cycles : compare and assign
            if(x > max)
            {//on true
                max = x;//assign
            }
        }
    }//for
    
    printf("Maximum : %d", max);
    return 0;
}
