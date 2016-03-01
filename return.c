/*
Study of return statement
refer about functions.txt 
see the diagram 
*/
#include<stdio.h> 

int calculateCube(int x)//x receives value of actual parameter
{
    int ans;
    ans = x*x*x;
            
    //ans to be given back to main
    return ans;
    
}

int main()
{
  int q, w;
  
  printf(" enter a number ");
  scanf("%d", &q);
  
  w = calculateCube(q);//call to calculateCube with q as actual parameter
  
  printf("\n CUBE(%d) : %d ", q, w);

  return 0;
}
