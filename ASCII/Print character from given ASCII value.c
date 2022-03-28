#include<stdio.h>
#include<conio.h>
int main ()
{
   char val='\0';

   printf("Enter a ASCII value to find out it's character:\n");
   scanf("%d",&val);
  
   printf("Character for given ASCII %d is %c\n",val,val);

   printf("Thanks for input!!!\n");

   getche ();
   return 0;
}