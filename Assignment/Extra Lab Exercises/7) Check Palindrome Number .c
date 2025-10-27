#include<stdio.h>

/*LAB EXERCISE 3: Palindrome Check
Que: Write a C program that takes a number as input and checks whether it is a palindrome using
a function.
Challenge: Modify the program to check if a given string is a palindrome.*/

int main()
{
    int num, originalNum, reversedNum = 0, remainder;
    
    
    // input from user
    printf("Enter a Number: ");
    scanf("%d", &num);
    
    originalNum = num; //store original Number
    
    //Reverse the Number
    while(num != 0)
    {
        remainder = num % 10; // get last digit
        
        reversedNum = (reversedNum * 10) + remainder; // build reversed number
        
        num = num / 10; // remove last digit
    }
    
    // check if original and reversed numbers are same
    if(originalNum == reversedNum)
    {
        printf("%d is a palindrome number. \n", originalNum);
    }
    else
    {
        printf("%d is not a palindrome number. \n", originalNum);
    }
    
    return 0;
}
