#include <stdio.h>
int main (){
    int a, b;
    
    printf("Enter two numbers : ");
    scanf("%d %d", &a, &b); // user input 
    
    printf("\n addition = %d", a + b);// addition 
    printf("\n substraction = %d", a- b);// substraction 
    printf("\n division = %d", a / b);//division 
    printf("\n multiplication = %d", a * b);//multiplication 
    printf("\n modulus = %d", a % b);//modulus 
    
    return 0;
    
    }
