#include<stdio.h>
#include<conio.h>
#include<stdbool.h>
#include<stdlib.h>


int main()
{
 int choose, Quantity, amount=0, total=0;
 char ch = 'y';
 
 while(ch == 'Y' || ch == 'y')
 {
 printf("-------------MENU-------------");
 printf("\n 1. Pizza  price = 180rs/pcs");
 printf("\n 2. Burger price = 100rs/pcs");
 printf("\n 3. Dosa   price = 120rs/pcs"); 
 printf("\n 4. Idli   price = 50rs/pcs");
 printf("\n Enter your choose : ");
 scanf("\n %d",&choose);
 
        switch(choose)
        {
             case 1: 
             printf("\n You have Selected pizza");
             printf("\n Enter The Quantity: ");
             scanf("%d", &Quantity);
             amount+=180*Quantity;
             printf("\n Amount %d", amount);
             break;
             
             case 2:
             printf("\n You have Selected Burger");
             printf("\n Enter The Quantity: ");
             scanf("%d", &Quantity);
             amount+=100*Quantity;
             printf("\n Amount %d",amount);
             break;
             
             case 3:
             printf("\n You have Selected Dosa");
             printf("\n Enter The Quantity: ");
             scanf("%d", &Quantity);
             amount+=120*Quantity;
             printf("\n Amount %d", amount);
             break;
             
             case 4:
             printf("\n You have Selected Idli");
             printf("\n Enter The Quantity: ");
             scanf("%d", &Quantity);
             amount+=50*Quantity;
             printf("\n Amount %d",amount);
             break;
             
             default:
             printf("Invalid Choose! Please Enter Choose Between (1 to 4)");
             break;
        }
            total+=amount;
            printf("\n Total Amount is = %d", total);
            printf("\n Do you want place more orders? y & n: ");
            scanf(" %c", &ch);
 }
            printf("\n Final Bill Amount is %d Rs.", total);
            printf("\n Thank You For Your Order.");
    
    return 0;
 }
