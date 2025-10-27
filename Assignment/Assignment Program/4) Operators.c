 #include<stdio.h>

/*Que:Write a C program that accepts two integers from the user and performs
arithmetic, relational, and logical operations on them. Display the results.*/

 int main()
 {
     int a, b;
     
     printf("Enter First Number: ");
     scanf("%d", &a);
     
     printf("Enter Second Number: ");
     scanf("%d", &b);
     
     printf("\n------Arithmetic Operators------\n");
     printf("\nAddition %d + %d = %d", a, b, a+b);
     printf("\nSubtraction %d - %d = %d", a, b, a-b);
     printf("\nMultiplication %d * %d = %d", a, b, a*b);
     if(b != 0)
     {
         printf("\nDivision %d / %d = %d", a, b, a/b);
         printf("\nModulus %d %% %d = %d\n", a, b, a%b);
     }
     else
     {
         printf("\nDivision and Modulus by zero are not allowed\n");
     }
 
     printf("\n------Relational Operators------\n");
     printf("\n%d < %d = %d", a, b, a<b);
     printf("\n%d > %d = %d", a, b, a>b);
     printf("\n%d <= %d = %d", a, b, a<=b);
     printf("\n%d >= %d = %d", a, b, a>=b);
     printf("\n%d == %d = %d", a, b, a==b);
     printf("\n%d != %d = %d\n", a, b, a!=b);
     
     printf("\n------Logical Operators------\n");
     printf("\n(%d && %d) = %d", a, b, (a && b));
     printf("\n(%d || %d) = %d", a, b, (a || b));
     printf("\n!(%d) = %d", a, !a);
     printf("\n!(%d) = %d", b, !b);
     
     return 0;
 }
 
