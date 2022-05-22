#include<stdio.h>
#include<conio.h>

int main ()
{
   char Name[20]={'\0'};
   char CpyName[20]={'\0'};
   int i=0;

   printf("Enter your name:\n");
   gets(Name);

   while(Name[i]!='\0')
   {
     CpyName[i]=Name[i];
     i++;
   }
   CpyName[i]='\0';
   printf("Given string is = %s\n",Name);
   printf("Copied to New string is = %s\n",CpyName);
   getch();
   return 0;
}