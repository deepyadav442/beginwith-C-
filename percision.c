/*
 * Precision difference between 
   float and double
 * Behavior of ==
*/
#include<stdio.h> 

int main()
{
    float a;
    double b;
    
    a = 1.2345;//stores the value with some tolerance
    b = 1.2345;//stores precise value
/*    
//Case1 : Compare a float variable and a double constant
//Difference will be observed by == and result of comparison for equality will be FALSE

    if(a == 1.2345)//1.2345 is a precise double value
        printf("\n A");
    else 
        printf("\n Float is a single precision (has tolerance) type");
*/

//Case2 : Compare a float variable and a float constant
//Both operands of == are of same type, so the storage tolerance will be ignored and result of comparison for equality will be TRUE
/*    
    if(a == 1.2345F)//1.2345F has some tolerance 
        printf("\n Two floats are equal in value irrespective of tolerance");
    else 
        printf("\n B");
*/
/*    
//Case3 : Compare a double variable and a double constant
//Both operands of == are of same type, and both being equal in value the result of comparison will be TRUE

    if(b == 1.2345)//1.2345 is a precise value
        printf("\n Both store 1.2345 precisely");
    else 
        printf("\n B");
*/
//Case4 : Compare a double variable and a float constant
//Tolerance difference will be observed by == and result of comparison for equality will be FALSE
    
    if(b == 1.2345F)//1.2345F has some tolerance
        printf("\n A");
    else 
        printf("\n Tolerance Difference Puts Prg Ctrl into ELSE");
    return 0;
}
