#include<stdio.h> 
/*
 Program to find GCD of 2 numbers
 */
int main()
{   
    int n1, n2;//input
    int i; //loop controlling variable
    
    printf("\n Enter 2 numbers ");
    scanf("%d%d", &n1, &n2);

    //i gets smaller of 2 numbers
    //i.e. i is the possible largest common divisor
    if(n1 < n2)
        i = n1;
    else
        i = n2;
    
    while(i >= 1)//go upto smallest common divisor : 1
    {
        if(n1 % i == 0 && n2 % i == 0)
        {
            printf("GCD :  %d ", i);
            //terminate the loop
            break;
        }
        i--;//decrement to get the next possible common divisor
    }//while
    return 0;
}
