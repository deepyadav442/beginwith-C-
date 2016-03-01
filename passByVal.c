#include<stdio.h> 
void fn(int y)//y is a formal parameter, it receives data of actual parameter
{//attempt to read and write y
    printf("\n in fn, y : %d ", y);
    y++;
    printf("\n in fn, y : %d ", y);
}

int main()
{
    int x;
    x = 10;
    printf("\n in main, x : %d ", x);
    fn(x);//x is passed as an actual parameter
    printf("\n in main, x : %d ", x);

    return 0;
}
