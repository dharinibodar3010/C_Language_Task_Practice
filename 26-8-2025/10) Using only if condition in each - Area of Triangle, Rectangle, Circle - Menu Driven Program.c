#include<stdio.h>
int main() {
    int choice;
    float area, base, height, length, breadth, radius;
    float PI = 3.14159;
    
    //Menu Display
    printf("\n----- Menu -----\n");
    printf("\n 1. Area of Trianglre");
    printf("\n 2. Area of Rectangle");
    printf("\n 3. Area of Radius");
    printf("\n Enter Your Choice : ");
    scanf("%d", &choice);
    
    //using if condition
    if(choice == 1){
        printf("Enter base and height of triangle : ");
        scanf("%f %f", &base, &height);
        area = 0.5 * base * height;
        printf("\n Area of Triangle = %f", area);
    }
    if(choice == 2){
        printf("Enter length and breadth of rectangle : ");
        scanf("%f %f", &length, &breadth);
        area = length * breadth;
        printf("\n Area of Rectangle = %f", area);
    }
    if(choice == 3){
        printf("Enter area of radius = ");
        scanf("%f", &radius);
        area = PI * radius * radius;
        printf("\n Area of radius = %f", area);
    }
    if(choice != 1 && choice != 2 && choice != 3){
        printf("\n Invalid Choice! please try again");
    }
return 0;
    
}

