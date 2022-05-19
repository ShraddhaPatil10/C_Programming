#include<stdio.h>
#include<conio.h>

int main ()
{
   char Name[20]={'\0'};
  
   printf("Enter your name:\n");
   gets(Name);

   printf("\n Given name is =>%s",Name);

   getch();
   return 0;
}