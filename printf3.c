//Printing Data Stored in Variables
//refer "about printf.txt"

#include<stdio.h> //required header file

int main()//prg starts here
{
    int a; //a variable
    a = 13;//assignment
    
    printf("\n %d ", a);//display value of a in decimal form
    printf("\n %x ", a);//display value of a in small case hexadecimal form
    printf("\n %X ", a);//display value of a in upper case hexadecimal form
    printf("\n %o ", a);//display value of a in octal form
    printf("\n %i ", a);//display value of a in integer form
                
    
    
    return 0; //end of prg
}//main
