#include<stdio.h> 
/*
Demo do while loop   
Printing number from 1 to 10
 
Refer loops.txt
*/
int main()
{   
    int i;
    
    i =1;//initialization
    do
    {//body (executes first time and then on true of condn)
        printf(" %d ", i);//1,2,3,...,9,10
        i++;//reinitialization
    }while(i < 11);
    //on false : i will be 11 but is not printed
    return 0;
}
