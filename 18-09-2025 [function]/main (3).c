#include<stdio.h>
#include<conio.h>
#include<ctype.h>// (isdigit(ch)) - numbers are not allowed used this file 
#include<stdbool.h>// when used (true) in while loop required this file, if used (1) insted of (true) - not required stdbool header file


void displayMenu()
{
    printf("\n-------------MENU------------");
    printf("\n 1. Pizza  Price = 180rs/pcs");
    printf("\n 2. Burger Price = 100rs/pcs");
    printf("\n 3. Dosa   Price = 120rs/pcs");
    printf("\n 4. Idli   Price = 50rs/pcs\n");
}

int getPrice(int choice)
{
    switch(choice)
    {
        case 1: return 180;
        case 2: return 100;
        case 3: return 120;
        case 4: return 50;
        default: return 0;
    }
    
}

void printSelection(int choice)
{
    switch(choice)
    {
        case 1: printf("\n You have selected Pizza");
        break;
        
        case 2: printf("\n You have selected Burger");
        break;
        
        case 3: printf("\n You have selected Dosa");
        break;
        
        case 4: printf("\n You have selected Idli");
        break;
        
        default: printf("\n Invalid Choice! Please Enter Your Choice Between (1-4)");
    }
}

int main()
{
    int choice, quantity, amount, totalAmount = 0;
    char ch = 'y';
    
    while(ch == 'y' || ch == 'Y')
    {
        displayMenu();
        printf("\n Enter Your Choice : ");
        scanf("%d", &choice);
        
        if(getPrice(choice) == 0)
        {
            printf("\n Invalid Choice! Try again");
            continue;
        }
         
        printSelection(choice);
        printf("\n Enter the quantity : ");
        scanf("%d", &quantity);
        
        amount = getPrice(choice) * quantity;
        
        totalAmount += amount;
        
        printf("\n Amount : %d", amount);
        
        printf("\n Total Amount is : %d", totalAmount);
       
        while(true)
        {
        printf("\n Do you want to place more orders? (Y/N): ");
        scanf(" %c", &ch);
        
            if(isdigit(ch))
            {
            printf("\n Numbers are not allowed!");
            continue;
            }                
            else
            {
            break;
            }
        }
    
    }
    
    printf("\n Finall Bill Amount is %d.", totalAmount);
    printf("\n Thank You For Your Order!");
    
    return 0;
}


