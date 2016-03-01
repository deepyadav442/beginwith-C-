#include<stdio.h> 
/*
 Program to accept age and gender
 and to give job. 
 */
int main()
{//variables can be declared as a block begins
 //variables get life and usability equal to the scope of enclosing block
    int age;
   
    printf("\n enter age ");
    scanf("%d", &age);
    
    printf("\n AGE : %d ", age);
    
    //combining conditions
    if(age >=18 && age <=40)
    {//variables can be declared as a block begins
     //variables get life and usability equal to the scope of enclosing block
        char gender;        
        
        printf("\n M : Male");
        printf("\n F : Female");
        printf("\n Enter Gender ");
        fflush(stdin);//clear the input stream
        scanf("%c", &gender);
        
        //'M' : char constant
        //18  : int constant
        //1.2345 : double constant
        
        if(gender == 'M' || gender == 'm')
        {
            printf("\n Welcome to Air Force");
        }
        else if(gender == 'F' || gender == 'f')
        {
            printf("\n Welcome to Air India");
        }
        else
        {
            printf("\n Invalid Input");
        }
    }
    else 
    {
        printf("\n Age not in a valid range (18-40) ");
    }
    
    
    return 0;
}
