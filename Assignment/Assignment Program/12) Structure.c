#include <stdio.h>

/*Que: Write a C program that defines a structure to store a student's details (name,
roll number, and marks). Use an array of structures to store details of 3
students and print them.*/

// Step 1: Define a structure
struct Student 
{
    char name[50];
    int rollNumber;
    float marks;
};

int main() 
{
    // Step 2: Declare array of structures
    struct Student students[3];   
    int i;

    // Step 3: Input details for 3 students
    for(i = 0; i < 3; i++) 
    {
        printf("\nEnter details for student %d\n", i + 1);
        
        printf("Enter name: ");
        scanf("%s", students[i].name);
        
        printf("Enter roll number: ");
        scanf("%d", &students[i].rollNumber);
        
        printf("Enter marks: ");
        scanf("%f", &students[i].marks);
    }

    // Step 4: Display details
    printf("\n--- Student Details ---\n");
    for(i = 0; i < 3; i++) 
    {
        printf("\nStudent %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Roll Number: %d\n", students[i].rollNumber);
        printf("Marks: %.2f\n", students[i].marks);
    }

    return 0;
}

