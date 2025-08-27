#include <stdio.h>
int main () {
    
    int s1, s2, s3, s4, s5;
    float totalmarks;
    float percentage;
    
    printf("enter marks of s1 : ");
    scanf("%d", &s1);
    
    printf("enter marks of s2 : ");
    scanf("%d", &s2);
    
    printf("enter marks of s3 : ");
    scanf("%d", &s3);
    
    printf("enter marks of s4 : ");
    scanf("%d", &s4);
    
    printf("enter marks of s5 : ");
    scanf("%d", &s5);
    
    
    totalmarks = (s1 + s2 + s3 + s4 + s5);
    percentage = (totalmarks/500.0)*100.0;
    
    printf("\n Total Marks = %f", totalmarks);
    printf("\n Percentage = %.2f%%", percentage);
    
    return 0;
}