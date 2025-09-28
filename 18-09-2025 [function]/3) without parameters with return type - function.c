#include<stdio.h>
#include<conio.h>

//without para (arg) with return type
int sum()
{
    int a = 4;
    int b = 3;
    
    int c = a+b;
    
    return c;
}

int main()
{
   printf("%d",sum());
   
   return 0;
}
