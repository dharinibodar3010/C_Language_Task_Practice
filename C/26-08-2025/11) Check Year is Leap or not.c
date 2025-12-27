#include<stdio.h>
int main (){
    int year;
    
    //user input
    printf("Enter a Year : ");
    scanf("%d", &year);
    
    //check leap year condition
    if((year % 4 == 0)
    {
        printf("\n Leap Year = %d", year);
    }
    else {
        printf("\n Not a leap Year = %d", year);
    }
    
    return 0;
}
