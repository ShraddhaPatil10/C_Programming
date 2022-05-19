#include<stdio.h>
#include<conio.h>

int main ()
{
   char cSrc[20]={'\0'};
  
   puts("Enter a string:\n");
   gets(cSrc);

   puts("\n Given string is =>");
   puts(cSrc);

   getch();
   return 0;
}