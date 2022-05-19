#include<stdio.h>
#include<conio.h>
#include<string.h>

int main ()
{
   char cSrc[20]={'\0'};
   int i=0;
  
   puts("Enter a string:\n");
   gets(cSrc);

   for(;cSrc[i]!='\0';)
   {
      i++;
   }
   printf("\n Length of given string=%d",i);

   getch();
   return 0;
}