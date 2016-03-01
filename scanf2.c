/*
More on scanf 
--------------

 * scanf returns the number of 
 values it successfully fetched
 from stdin and stored in variables.
 
 * scanf allows fetching data 
 in multiple different forms.
 
 */
#include<stdio.h> 


int main()
{
    int a, b, c;
    int cnt;
/*
   //fetch count by scanf
      
    printf("enter 3 numbers ");
    //fetch 3 decimal values and store in variable "a" "b" and "c"
    cnt = scanf("%d%d%d", &a, &b, &c);
    
    printf("\n a : %d ", a);
    printf("\n b : %d ", b);
    printf("\n c : %d ", c);
    printf("\n counter : %d ", cnt);
*/
    
    printf("Enter a hexadecimal value ");
    scanf("%x", &a);//%x and %X mean the same
    
    printf("Enter a octal value ");
    scanf("%o", &b);
    
    printf("Enter a integer value ");
    scanf("%i", &c);
    
    printf("\n a : %d ", a);
    printf("\n b : %d ", b);
    printf("\n c : %d ", c);    
    
    return 0;
}
