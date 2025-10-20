#include <stdio.h>
#include <math.h>

/*Lab Challenge 1: Armstrong Number
Write a C program that checks whether a given number is an Armstrong number or not (e.g.,
153 = 1^3 + 5^3 + 3^3).
Challenge 2: Write a program to find all Armstrong numbers between 1 and 1000.*/

//Challenge 2: Find all Armstrong numbers between 1 and 1000

int main() {
    int num, original, temp, remainder, digits;
    int sum;

    printf("Armstrong numbers between 1 and 1000:\n");

    for (num = 1; num <= 1000; num++) 
    {
        original = num;
        temp = num;
        digits = 0;
        // count digits
        while (temp != 0) 
        {
            digits++;
            temp /= 10;
        }

        // sum of digits^digits
        temp = num;
        sum = 0;
        while (temp != 0) 
        {
            remainder = temp % 10;
            sum += pow(remainder, digits);
            temp /= 10;
        }

        if (sum == original) 
        {
            printf("%d ", original);
        }
    }
    
    printf("\n");
    
 return 0;
}