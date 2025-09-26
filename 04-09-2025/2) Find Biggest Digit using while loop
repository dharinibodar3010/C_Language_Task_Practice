#include<stdio.h>
int main()
{
    int num, max=0;
    
    printf("enter any number : ");
    scanf("%d", &num);
    
    while(num>0)
    {
        int remainder = num % 10;
        
        if(remainder>max)
        {
            max = remainder;
        }
        num = num / 10;
    }

    printf("Biggest Digit is : %d", max);

    return 0;
}
