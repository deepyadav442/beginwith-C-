//More examples on operator : ++

#include<stdio.h> //required header file

int main()//prg starts here
{
    int a, b;
    a = 10;
    b = ++a * 5;
    //the above statement will be solved in following sequence
    //1 : increment
    //2 : multiplication
    //3 : assignment
    
    printf("\n a : %d ",a);
    printf("\n b : %d ",b);
    
    return 0; //end of prg
}//main

//refer unit increment.txt
