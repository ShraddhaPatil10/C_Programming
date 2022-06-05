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
      char ch=Name[i];
      Name[i]=Name[j];
      Name[j]=ch;
      i--;
      j++;
   }
 
   printf("Given string after Reverse is = %s\n",Name);
   
   getch();
   return 0;
}