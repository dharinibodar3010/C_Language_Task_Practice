#include<stdio.h>

/*Que: Write a C program to demonstrate pointer usage. Use a pointer to modify the
value of a variable and print the result.*/

int main()
{
    //step 1: declare a normal integer variable  
    int num = 10;
    
    //step 2: declare a pointer variable 
    int *ptr;
    
    //step 3: assign the address of num to the pointer
    ptr = &num;
    
    printf("Original value of num: %d\n", num);
    printf("Address of num: %p\n", &num);
    printf("Value of ptr (address stored): %p\n", ptr);
    printf("Value pointed by ptr: %d\n", *ptr);
    
    //step 4: modify the value of num using pointer
    *ptr = 25;
    
    printf("\nAfter modifying through pointer:\n");
    printf("New value of num: %d\n", num);
    printf("Value pointed by ptr: %d\n", *ptr);
    
    return 0;
}
