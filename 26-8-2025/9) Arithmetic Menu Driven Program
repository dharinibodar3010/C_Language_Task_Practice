#include<stdio.h>
int main() {
    int choice;
    float a, b, result;
    
    //Menu display
    printf("\n----- Calculator ----\n");
    printf("\n 1. Addition");
    printf("\n 2. Subtraction");
    printf("\n 3. Multiplication");
    printf("\n 4. Division \n");
    printf("\n Enter Your Choice : ");
    scanf("%d", &choice);
    
    //Input Number
    printf("\n Enter two number : ");
    scanf("%f %f", &a, &b);
    
    //Switch case break
    switch(choice) {
    case 1:
        result = a + b;
        printf("\n Result = %f", result);
        break;
    
    case 2:
        result = a - b;
        printf("\n Result = %f", result);
        break;
    
    case 3:
        result = a * b;
        printf("\n Result = %f", result);
        break;
    
    case 4:
        if(b != 0) {
            result = a / b;
            printf("\n Result = %f", result);
            }
            else {
            printf("\n Error!, Division by zero not allowed");
            }
            break;
    
    default :
    printf("\n Invalid choice! please try again.");
    
    }
   return 0; 
}
