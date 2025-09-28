#include<stdio.h>
#include<conio.h>

int main()
{
    char C;
    
    printf("Enter Character: ");
    scanf("%c", &C);
    
    //printf("Character is %c", c);
    
    if(C == 'A'|| C == 'E' || C == 'I' || C == 'O' || C =='U')
    {
        printf("It's a Vowel");
    }
    else
    {
        printf("It's a Consonant");
    }
    return 0;
}
