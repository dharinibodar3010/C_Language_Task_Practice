#include<stdio.h>

struct student
{
    char name[50];
    float marks[3];
    float total;
    float average;
}s[100];

//Function declaration
void inputstudent(struct student s[], int n);
void displayreport(struct student s[], int n);
void findresult(struct student s[], int n);

int main()
{
    struct student s[100];
    int n;
    
    printf("Enter number of students (max 100): ");
    scanf("%d", &n);
    
    inputstudent(s, n); //function call to take input
    displayreport(s, n); //display all student data
    findresult(s, n); //higest, lowest, pass, fail
    
    return 0;
}

//Function to input student data
void inputstudent(struct student s[], int n)
{
    int i, j;
    
    for(i=0; i<n; i++)
    {
        printf("\nEnter name of student %d: ", i+1);
        scanf("%s", s[i].name);
        
        s[i].total = 0;
        for(j=0; j<3; j++)
        {
            printf("Enter marks of subject %d: ", j+1);
            scanf("%f", &s[i].marks[j]);
            s[i].total += s[i].marks[j];
        }
        
        s[i].average = s[i].total/3.0;
    }
}

//Function to display all student records
void displayreport(struct student s[], int n)
{
    int i, j;
    printf("\n\n-------------------------------Student Report--------------------------------\n");
    printf("%-15s %-10s %-10s %-10s %-10s %-10s\n", "Name", "Sub1", "Sub2", "Sub3", "Total", "Average");
    printf("-----------------------------------------------------------------------------\n");
    
    for(i=0; i<n; i++)
    {
        printf("%-15s", s[i].name);
        
        for(j=0; j<3; j++)
        {
            printf("%-10.2f", s[i].marks[j]);
        }
        printf("%-10.2f %-10.2f\n", s[i].total, s[i].average);
    }
    
}

//Function to find and display result
void findresult(struct student s[], int n)
{
    int i;
    int highest = 0, lowest = 0;
    int pass = 0, fail = 0;
    
    for(i=0; i<n; i++)
    {
        if(s[i].average >= 40)
        {
            pass++;
        }
        else
        {
            fail++;
        }
        
        if(s[i].average > s[highest].average)
                highest = i;
        if(s[i].average < s[lowest]. average)
                 lowest = i;
    }
    
    printf("\nHighest Average: %s (%.2f)\n", s[highest].name, s[highest].average);
    printf("\nLowest Average: %s (%.2f)\n", s[lowest].name, s[lowest].average);
    printf("\nPassed Students: %d\n", pass);
    printf("\nFail students: %d\n", fail);
    
}



