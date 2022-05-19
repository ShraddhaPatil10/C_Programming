#include<stdio.h>
#include<conio.h>

int main ()
{
   char cSrc[20]={'\0'};
   int i=0;
  
   puts("Enter a string:\n");
   gets(cSrc);

   while (cSrc[i]!='\0')
   {
       i++;
   }
   printf("\n Length of given string=%d",i);

   getch();
   return 0;
}