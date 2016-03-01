//refer about functions.txt
//see the diagram

#include<stdio.h> 

void f2()
{
    printf("\n I ");
    printf("\n II ");
    printf("\n III ");
}

void f1()
{
    printf("\n 1 ");
    printf("\n 2 ");
    printf("\n 3 ");
    f2();//a function call
    printf("\n 4 ");
    printf("\n 5 ");
}

int main()
{
    printf("\n A ");
    printf("\n B ");
    f1();//function call
    printf("\n C ");
    printf("\n D ");
    f2();//function call
    printf("\n E ");
    printf("\n F ");
    return 0;
}
