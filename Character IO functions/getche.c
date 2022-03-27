#include<stdio.h>
#include<conio.h>
int main ()
{
   char Gr='Q';
   printf("Value of character before:%c\n",Gr);
  
   printf("Enter any character:\n");
   Gr=getche();

   printf("\n");
   printf("Value of character entered:%c\n",Gr);

   getch();
   return 0;
}
    