#include<stdio.h>

int main()
{
   int mobilestock, laptopstock, desktopstock;
   int mobilepurchase, laptoppurchase, desktoppurchase;
   
   // total stock available
   
   printf("\n------TOTAL STOCK------\n");
   printf("\n enter total stock of mobile :100");

   printf("\n enter total stock of laptop :100");
   
   printf("\n enter total stock of desktop :100 \n");
   
   // total purchase stock
   
   printf("\n------TOTAL PURCHASE STOCK------\n");
   printf("enter purchased mobile : ");
   scanf("%d", &mobilepurchase);
   
   printf("enter purchased laptop : ");
   scanf("%d", &laptoppurchase);
   
   printf("enter purchased desktop : ");
   scanf("\n %d", &desktoppurchase);
   
   // total remaining stock calculate 
   
   int remainingmobile = (100 - mobilepurchase);
   int remaininglaptop = (100 - laptoppurchase);
   int remainingdesktop = (100 - desktoppurchase);
   
   printf("\n-------REMAINING STOCK--------\n");
   printf("\n remainingmobile stock is : %d", remainingmobile);
   printf("\n remaininglaptop stock is : %d", remaininglaptop);
   printf("\n remainingdesktop stock is : %d \n", remainingdesktop);
   
   printf("\n+------------+------------+------------+----------------+\n");
   printf("| Item   |Total Stock| Purchase Stock | Remaining Stock | \n");
   printf("+--------------+------------+------------+----------------+\n");
   printf("\n %-10s %-15d %-15d %-15d", "Mobile", 100, mobilepurchase, remainingmobile);
   printf("\n %-10s %-15d %-15d %-15d", "Laptop", 100, laptoppurchase, remaininglaptop);
   printf("\n %-10s %-15d %-15d %-15d", "Desktop",100, desktoppurchase, remainingdesktop);
   
   return 0;
}
