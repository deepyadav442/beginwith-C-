/*
Introduction to scanf 
------------------
  
scanf is a predefined function
that comes from header file 
stdio.h 
 
It fetches data from stdin and
transmits the same into program 
variables. 
 
If stdin is empty then scanf
blocks program execution until 
data is fetched. 
 
If stdin has compatible data
then scanf utilizes the same 
and doesn't block the program 
execution. 
 
 */

#include<stdio.h> 

int main()
{
    int a,b;
    
    printf("enter a number ");
    scanf("%d", &a);//fetch a decimal value and store in variable named "a"
        
    b = a*a;
    printf("\n Square of %d is %d ",a,b);
      
    return 0;
}
