#include<stdio.h>
#include<conio.h>
int main ()
{
   char ch='\0';

   printf("Enter a character to find it's ASCII value:\n");
   ch=getche();
   printf("\n");
  
   printf("ASCII value of %c is %d\n",ch,ch);

   printf("Thanks for input!!!\n");

   getche ();
   return 0;
}