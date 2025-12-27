#include<stdio.h>
#include<conio.h>

//with parameter(arguments) without return type
void sum(int a, int b)
{
    int c = a+b;
    printf("%d", c);
}

int main()
{
    sum(5,3);
    
    return 0;
}
