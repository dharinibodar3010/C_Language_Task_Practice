#include<stdio.h>
int main()
{
    int num,i;
    printf("enter any number : ");
    scanf("%d", &num);
    
    for(i=1;i<=10;i++)
    {
        int ans = num * i;
        printf("\n %d * %d = %d", num, i, ans);
    }
    
    return 0;
    
}