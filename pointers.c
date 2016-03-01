/*
Pointer Demo
 
Refer about pointers.txt
See the diagram 
*/

#include<stdio.h> 

int main()
{
    int x; //declare a variable
    int *p; //declare a pointer
    
    x = 10;//write into x
    printf("\n x : %d ", x);
    
    p = &x;//referencing (assigning address to a pointer)
    //now the variable (x) can be accessed by its address also

    *p = 99; //write into x by dereferencing the pointer
    printf("\n x : %d ", x);
    return 0;
}
