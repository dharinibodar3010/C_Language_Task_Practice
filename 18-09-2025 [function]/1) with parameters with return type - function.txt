#include<stdio.h>
#include<conio.h>

//with para(arguments) with return type
int cal(int a, int b)
{
    return a+b;
}

int main()
{
    printf("\n %d", cal(5,3));
    printf("\n %d", cal(5,4));
    
    return 0;    
}
