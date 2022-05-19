#include<stdio.h>
#include<conio.h>
#include<string.h>

int main ()
{
   char cSrc[20]={'\0'};
   int len=0;
  
   puts("Enter a string:\n");
   gets(cSrc);

   for(len=0;cSrc[len]!='\0';len++)
   {
   
   }
   printf("\n Length of given string=%d",len);

   getch();
   return 0;
}