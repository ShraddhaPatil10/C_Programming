#include<stdio.h>
#include<conio.h>
int main ()
{
   int val;

   printf("ASCII table:\n");

   for(val=0;val<=127;val++)
   {
     printf("%d=%c\n",val,val);
   }

   printf("Thanks for input\n");

   getch();
   return 0;
}