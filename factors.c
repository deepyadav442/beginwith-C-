#include<stdio.h> 
/*
 Program to find factors of a number
 */
int main()
{   
    int i;//loop controlling variable
    int n;//input
    
    printf("\n Enter a number ");
    scanf("%d", &n);

    printf("\n Factors of %d : ", n);
    
    i = 1;//initialization as smallest factor
    while(i<= n)//condition as largest factor
    {
        if(n % i == 0)
        {
            printf(" %d ", i);
        }
        i++;//reinitialization as next possible factor
    }
    return 0;
}
