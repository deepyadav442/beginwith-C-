//demo of if statement

//program to test whether a number 
//is even or odd.

//refer conditional branching.txt
//see the diagram

#include<stdio.h> 
int main()
{
    int a;
    a = 10;
    if(a %2 == 0)// solving seq (%,==)
    {
        printf("%d is an even number ",a);
    }
    else
    {
        printf("%d is an odd number ",a);
    }
    return 0;
}

/*
== is a comparison operator.
It compares the value of the
operands for equality and
returns a boolean. 
 
 */ 