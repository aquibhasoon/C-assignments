#include <stdio.h>

void addition(float x,float y)
{
    printf("Sum of the two numbers %f and %f is : %f",x,y,x+y);
}

void subtraction(float x,float y)
{
    printf("Difference of the two numbers %f and %f is : %f",x,y,x-y);
}

void multiplication(float x,float y)
{
    printf("Product of the two numbers %f and %f is : %f",x,y,x*y);
}


void division(float x,float y)
{
    printf("Quotient of the two numbers %f and %f is : %f",x,y,x/y);
}



int main()
{
    float num1,num2;
    char operation;
    printf("Enter Two numbers number: \n");
    scanf("%f%f",&num1,&num2);
    printf("Enter an operation (+,-,*,/): ");
    scanf("%s",&operation);
    switch (operation)
    {
        case '+':
            addition(num1,num2);
            break;
        
        case '-':
            subtraction(num1,num2);
            break;
            
        case '*':
            multiplication(num1,num2);
            break;
            
        case '/':
            division(num1,num2);
            break;
            
        default:
            printf("Invalid Choice");
            break;
            
    }
    
    return 0;
    
}