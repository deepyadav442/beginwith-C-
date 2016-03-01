//pass by value concept check
#include<stdio.h> 

void swap(int a, int b)// a == x, b == y
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x, y;
    x = 10;
    y = 20;
    printf("\n x : %d   y : %d ", x, y);//10 20
    swap(x, y);//x and y are passed as an actual parameter
    printf("\n x : %d   y : %d ", x, y);//20 10 , 10 20

    return 0;
}
