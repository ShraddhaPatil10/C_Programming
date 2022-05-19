#include<stdio.h>
#include<conio.h>
#include<string.h>

int main ()
{
   char cSrc[20]={'\0'};
   int i=0;
  
   puts("Enter a string:\n");
   gets(cSrc);

   for(i=0;cSrc[i]!='\0';i++)
   {
      if(cSrc[i]=='\0')
      {
        break;
      }
   }
   printf("\n Length of given string=%d",i);

   getch();
   return 0;
}