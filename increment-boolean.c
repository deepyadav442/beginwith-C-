/*
 increment and boolean
*/

#include<stdio.h> 
int main()
{
    int a; 
    a = 0;

    //if(a++)//solving sequence ( a as boolean, increment a)
    if(++a)//solving sequence (increment a, a as boolean)
    {
	printf("\n HELLO %d",a);
    }
    else
    {
	printf("\n BYE %d",a);
    }
        
    return 0;
}
