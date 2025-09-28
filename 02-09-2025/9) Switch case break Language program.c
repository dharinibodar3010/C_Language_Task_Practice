#include<stdio.h>
#include<conio.h>
void main()
{
    int num=5;
    
    switch(num)
    {
        case 1: printf("\n Your Selected Language is English");
        break;
        
        case 2: printf("\n Your Selected Language is Hindi");
        break;
        
        case 3: printf("\n Your Selected Language is Gujarati");
        break;
        
        default: printf("\n Your Number is Not Valid");
        break;
    }
    
    getch();
}
