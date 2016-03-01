#include<stdio.h> 
/*
 Program to analyze priority of
 logical And and logical Or
 */
int main()
{   
    int a,b,c;
    a = 10;
    b = 20;
    c = 30;
    //mentally attempt to solve it in 2 orders
    //1) And first Or next
    //2) Or first And next
    //execute and conclude which order matched with systems approach
    
    // F && T || T
    if(a < 5 && b > 15 || c == 30)
    {
        printf("\n Logical AND has higher priority as compared to Logical OR");
    }
    else
    {
        printf("\n Logical OR has higher priority as compared to Logical AND");
    }
            
    return 0;
}
//Result:
//Logical AND has higher priority as compared to Logical OR