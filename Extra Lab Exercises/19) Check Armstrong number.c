/*Lab Challenge 1: Armstrong Number
Write a C program that checks whether a given number is an Armstrong number or not (e.g.,
153 = 1^3 + 5^3 + 3^3).
Challenge: Write a program to find all Armstrong numbers between 1 and 1000.*/

#include <stdio.h>

int main() 
{
    
//Challenge 1: check if a Number is an Armstrong Number    
    int num, original, remainder, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    while (num != 0) 
    {
        remainder = num % 10;  // get last digit
        sum = sum + remainder * remainder * remainder;  // cube and add
        num = num / 10; // remove last digit
    }

    if (sum == original)
        printf("%d is an Armstrong number.\n", original);
    else
        printf("%d is not an Armstrong number.\n", original);
   
    return 0;
}