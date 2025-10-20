#include <stdio.h>

/*LAB EXERCISE 3: Sum of Digits
Que: Write a C program that takes an integer from the user and calculates the sum of its digits
using a while loop.
Challenge: Extend the program to reverse the digits of the number.*/

int main() 
{
    int num, sum = 0, reverse = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &num);

    int original = num;  // store original number for reference

    while (num != 0) {
        remainder = num % 10;        // get last digit
        sum = sum + remainder;       // add to sum
        reverse = reverse * 10 + remainder;  // build reverse number
        num = num / 10;              // remove last digit
    }

    printf("\nSum of digits of %d = %d\n", original, sum);
    printf("Reverse of %d = %d\n", original, reverse);

    return 0;

}
