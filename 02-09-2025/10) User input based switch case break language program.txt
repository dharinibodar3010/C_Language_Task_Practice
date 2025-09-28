#include <stdio.h>

int main()
{
    int num;
    
    printf("Enter Any Number : ");
    scanf("%d", &num);
    
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

    return 0;
}
