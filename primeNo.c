#include<stdio.h> 

/*
program to accept a number
and find whether it is a 
prime number or not 
 */

int main()
{   
    int n;//input
    int x;//a flag 
    int i;//loop controlling variable

    printf("enter a number ");
    scanf("%d", &n);

    if(n == 1)
    {
        printf("\n 1 is ....");
        return 0;//terminate main
    }
    else if(n < 1)
    {
        printf("\n Invalid input %d ", n);
        return 0;//terminate main
    }
    
    x = 1; //default value of flag
    
    //look for factors in range 2 to n/2
    for(i = 2; i<= n/2; i++)
    {
        if(n % i == 0)
        {//i is a factor of n
            x = 0;//change the state of flag
            break;//stop the loop
        }
    }//for
    
    //check the state
    if(x == 1) //no factor found
        printf("\n %d IS A PRIME NUMBER", n);
    else if(x == 0) //factor found
        printf("\n %d IS NOT A PRIME NUMBER", n);
            
    return 0;
}
/*
 In programming "flag" is any
 variable that represents a
 state.
 */
