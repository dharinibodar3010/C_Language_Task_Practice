#include<stdio.h>
int main()
{
    int num, fdigit, ldigit;
   
   printf("enter any number : ");
   scanf("%d", &num);
    
    ldigit = num % 10;//last digit
    
    while(num>0)
    {
        if(num>9)
        {
            num = num/10;
        }
    
        else
        {
            fdigit = num;//first digit
            num = num / 10;
        }
    }

    int sum = fdigit + ldigit;
    printf("\n sum of first and last digits are = %d", sum);
    printf("\n first digit = %d", fdigit);
    printf("\n last digit = %d",ldigit);
    return 0;
}
