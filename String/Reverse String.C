#include<stdio.h>
#include<conio.h>

int main ()
{
   char Name[20]={'\0'};
   char RevName[20]={'\0'};
   int i=0,j=0;

   printf("Enter a string:\n");
   gets(Name);

   while(Name[i]!='\0')
   {
     i++;
   }
   i--;

   while(i>=0)
   {
      RevName[j]=Name[i];
      i--;
      j++;
   }
 
   printf("Given string is = %s\n",Name);
   printf("Reverse string is = %s\n",RevName);

   getch();
   return 0;
}