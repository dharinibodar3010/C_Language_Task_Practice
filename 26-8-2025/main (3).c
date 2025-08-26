#include<stdio.h>
int main (){
    
    float base, height, area;
    
    printf("Enter the base of triangle : ");
    scanf("%f", &base);//user input 
    
    printf("Enter the height of triangle : ");
    scanf("%f", &height);//user input 
    
    //formula area = 0.5*b*h
    area = 0.5 * base * height;
    
    printf("\n area of triangle = %f", area);
    
    return 0;
}