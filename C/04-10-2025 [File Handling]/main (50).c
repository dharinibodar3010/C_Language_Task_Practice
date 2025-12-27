#include<stdio.h>
#include<conio.h>

void main()
{
    FILE *fp;
    fp = fopen("a.txt", "w");
    char c;
    
    printf("Enter Character: ");
    
    while((c=getchar())!='0')
    {
        putc(c, fp);
    }
    
    fclose(fp);
    
    getch();
}