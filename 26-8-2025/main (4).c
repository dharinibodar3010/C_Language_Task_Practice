#include<stdio.h>
int main (){
    
    float P, R, T, SI, Total;
    
    printf("Enter Principal Amount : ");
    scanf("%f", &P);//user input 
    
    printf("Enter Rate of Interest : ");
    scanf("%f", &R);//user input 
    
    printf("Enter Time (in years) : ");
    scanf("%f", &T);//user input 
    
    //formula
    SI = (P * R * T)/100;
    Total = SI + P;
    
    printf("\n Simple Interest = %f", SI);
    printf("\n Total Amount = %f", Total);

    
    return 0;
}
