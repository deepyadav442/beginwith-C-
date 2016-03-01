#include<stdio.h> 
/*
Demo for loop   
Printing number from 1 to 10
 
Refer loops.txt
*/
int main()
{   
    int i;
//       init   condn  reinit
    for(i = 1; i< 11;  i++)
    {//body (executes on true of condn)
        printf(" %d ", i);//1,2,3,...,9,10
    }
    //on false : i will be 11 but is not printed
    return 0;
}
