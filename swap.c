//swapping 2 numbers

#include<stdio.h> //required header file
int main()//prg starts here
{
    int a, b, c;
    
    a = 10;
    b = 20;
    
    printf("\n %d  %d ",a,b);
    //swap approach 1
    //c = a;
    //a = b;
    //b = c;
    
    //swap approach 2
    a = a + b;
    b = a - b;
    a = a - b;
    
    printf("\n %d  %d ",a,b);
          
    return 0; //end of prg
}//main

//see diagrams : swap1 and swap2
