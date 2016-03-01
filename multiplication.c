#include<stdio.h> 
/*
 Generate multiplication table
 of a number
 */
int main()
{   
    int n;//input
    int ans;//to store output
    int i ;//to control loop
    
    printf("\n enter a number ");
    scanf("%d", &n);
    
    i = 1;//initialization
    while(i<=10) //condition
    {
     ans = n * i;
     printf("\n %2d * %2d =  %3d ",n, i, ans);
     i++;//reinitialization
    }
    return 0;
}
