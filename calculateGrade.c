/*
Study of "if" - "else if" - "else" 
Study of combining conditions  
*/

#include<stdio.h> 

int main()
{
    int a, b, c;
    float avg;
    
    printf("\n enter marks for 3 subjects ");
    scanf("%d%d%d", &a, &b, &c);

    //any arithmetic operation on 
    //values of a common type
    //will result in a value of the
    //same type.
    //Narrowing/Broadening conversion
    //will not take place.
    
    //avg = (a+b+c)/3;// divide by 3 to get a int ans
    avg = (a+b+c)/3.0;//divide by 3.0 to get a float ans
    
    printf("\n AVERAGE : %f ", avg);
    
    if(avg >=0 && avg <=39)
    {
        printf("\n Result : FAIL");
    }
    else if(avg >= 40 && avg <=49)
    {
        printf("\n Result : THIRD CLASS");
    }
    else if(avg >= 50 && avg <=59)
    {
        printf("\n Result : SECOND CLASS");
    }
    else if(avg >= 60 && avg <=100)
    {
        printf("\n Result : FIRST CLASS");
    }
    else
    {
        printf("\n Invalid Input");
    }
    
    return 0;
}
