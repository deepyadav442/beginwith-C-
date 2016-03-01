#include<stdio.h> 
/*
 Basic Arithmetic Calculator
 refer : conditional branching.txt 
 */
int main()
{   
    float no1, no2, ans;
    int choice;
    
    printf("\n enter 2 numbers ");
    scanf("%f%f", &no1, &no2);
    
    printf("\n 1. Addition ");
    printf("\n 2. Subtraction ");
    printf("\n 3. Multiplication ");
    printf("\n 4. Division ");
    printf("\n Enter Choice ");
    scanf("%d", &choice);//possible values : 1,2,3,4,any other
    
    //can be solved using "if"-"else if"-"else" also
    switch(choice)//choice may be int/char
    {
        case 1: //when choice == 1
            ans = no1 + no2;
            printf("\n %.2f + %.2f = %.2f ", no1, no2, ans);
            break;//to avoid auto-execution of next case

        default: //when choice != (1,2,3,4)
            printf("\n Invalid Choice");
            //break;//to avoid auto-execution of next case
            
        case 2: //when choice == 2
            ans = no1 - no2;
            printf("\n %.2f - %.2f = %f ", no1, no2, ans);
            break;//to avoid auto-execution of next case

        case 1+3: //when choice == 4
            ans = no1 / no2;
            printf("\n %.2f / %.2f = %f ", no1, no2, ans);
            break;//to avoid auto-execution of next case

        case 3: //when choice == 3
            ans = no1 * no2;
            printf("\n %.2f * %.2f = %f ", no1, no2, ans);
            break;//to avoid auto-execution of next case
    }//switch
    
    return 0;
}
