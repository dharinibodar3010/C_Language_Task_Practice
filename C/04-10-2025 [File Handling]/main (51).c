#include<stdio.h>
#include<conio.h>

void main()
{
    FILE *fp;
    fp = fopen("a.txt", "r");
    char c;
    
    while((c=getc(fp)) != EOF) //end of FILE
    {
        printf("%c", c);
    }
    
    fclose(fp);
    
    getch();
}