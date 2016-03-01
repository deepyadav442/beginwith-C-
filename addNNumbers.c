#include<stdio.h> 
/*
Program to add n numbers
*/

int main()
{   
    int n;//count
    int i;//loop controlling variable
    int x;//input
    int ans;//addition
    
    printf("How many numbers to add ");
    scanf("%d", &n);

    ans = 0;//a value neutral to addition
    //loop n times
    for(i = 1; i<=n; i++)
    {
        printf("Enter number %d ", i);
        scanf("%d", &x);//10,5,2,8
        ans = ans + x;//10,15,17,25
    }//for
    
    printf("Addition : %d", ans);
    return 0;
}
