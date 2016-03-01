#include<stdio.h> 
/*
 Program to Reverse A Number
 Example :
 108 must become 801
 */
int main()
{   
    int n;//original number
    int r;//reversed number
    int x;//for logic
    
    printf("\n enter a number ");
    scanf("%d", &n);
    
    r = 0;//clear the garbage
    while(n > 0)
    {
        x = n % 10;//fetch the last digit of n
        r = r *10 + x;//form a number
        n = n/10; //remove the last digit from n
    }
    
    //n is zero and r has the reverse
    //assign r to n
    n = r;
    
    printf("Reversed : %d ", n);
    return 0;
}
