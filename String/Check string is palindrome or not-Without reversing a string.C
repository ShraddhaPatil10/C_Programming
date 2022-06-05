#include<stdio.h>
#include<conio.h>

int main ()
{
   char Name[20]={'\0'};
   int i=0,j=0,Len=0;

   printf("Enter a string:\n");
   gets(Name);

   while(Name[i]!='\0')
   {
     i++;
   }
   i--;
   Len=i/2;

   while(i>Len)
   {
      if(Name[i]!=Name[j])
      {
          break;
      }
      i--;
      j++; 
   }
 
   if(i==Len)
   {
      printf("\n Given string %s is palindrome.",Name);
   }
   else
   {
      printf("\n Given string %s is not palindrome.",Name);
   }
   getch();
   return 0;
}