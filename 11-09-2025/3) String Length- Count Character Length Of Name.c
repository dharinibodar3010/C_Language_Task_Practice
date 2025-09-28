#include<stdio.h>
#include<conio.h>
#include<string.h>

int main ()
{
    char ch[50];
    
    //count character length of name Ex - Dharini -> 7
    
    printf("enter your name : ");
    scanf("%s", &ch);
    
    printf("%d", strlen(ch));
    
    return 0;
}
