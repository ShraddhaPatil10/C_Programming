#include<stdio.h>
#include<conio.h>
#include<string.h>

int main ()
{
   char cSrc[29]={};
   int Len=0;
  
   puts("Enter a string:\n");
   gets(cSrc);

   Len=strlen(cSrc);
   printf("Length of given string=%d\n",Len);

   getch();
   return 0;
}