#include<stdio.h>

//Que:Write a C program that includes variables, constants, and comments. Declare
and use different data types (int, char, float) and display their values.

int main()
{
    int age = 21;//integer variable
    float percentage = 95.70;//float variable
    char grade = 'A';//character variable 
    const float PI = 3.14159;//constant value cannot be changed 
    
    printf("\n--------Display Values--------");
    printf("\nAge (int) = %d", age);
    printf("\nPercentage (flot) = %.2f", percentage);
    printf("\nGrade (char) = %c", grade);
    printf("\nValue of PI (const float) = %.5f", PI);
    
    return 0;
}

//------comments------
//this program shows:
//1. how to declare variables
//2. how to declare constants 
//3. how to use int, char, and float data types
//4. how to print values using printf()
