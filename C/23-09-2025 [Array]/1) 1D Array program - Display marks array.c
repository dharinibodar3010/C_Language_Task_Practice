#include<stdio.h>

int main()
{
    //length 5
    //index 4 
    
    int marks[5];
    
    marks[0] = 56;
    marks[1] = 66;
    marks[2] = 76;
    marks[3] = 86;
    marks[4] = 96;

    int i;
    
    for(int i=0; i<5; i++)
    {
        printf("\n marks[%d] = %d", i, marks[i]);
    }

    return 0;
}
