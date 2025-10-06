#include<stdio.h>

/*LAB EXERCISE:
o Write a C program to create a file, write a string into it, close the file, then
open the file again to read and display its contents.*/

int main()
{
    FILE *fp;
    char str[100];
    
    //step 1: Open file in write mode
    fp = fopen("Example.txt", "w");
    
    //step 2: Get user input
    printf("Enter a string to write into the file:\n");
    fgets(str, sizeof(str), stdin);
    
    //step 3: Write string to file
    fputs(str, fp);
    
    //step 4: Close the file after writing file
    fclose(fp);
    
    printf("\nData written successfully to 'Example.txt'.\n");
    
    //step 5: Open same file in read mode
    fp = fopen("Example.txt", "r");
    
    printf("\nContents of the file: \n");
    
    //step 6: Read and display nContents
    while(fgets(str, sizeof(str), fp) != NULL)
    {
        printf("%s", str);
    }
    
    //step 7: Close file after reading
    fclose(fp);
    
    return 0;
}
