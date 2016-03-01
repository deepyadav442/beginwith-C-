#include<stdio.h> 
/*
 While Loop Demo 
 printing numbers from 1-10
 */
int main()
{   
    int i;
    
    i = 1;//initialization
    while(i < 11)//condition
    {//on true
        printf(" %d ", i);
        i++;//reinitialization
    }//while
    //on false
    
    return 0;
}
