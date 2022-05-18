#include<stdio.h>
#include<conio.h>

int main ()
{
   char Name[20]={};
   int i=0,upcnt=0;
   printf("Enter your name:\n");
   gets(Name);

   while(Name[i]!='\0')
   {
        if(Name[i]>='A' && Name[i]<='Z')
        {
           upcnt++;
        }
        i++;
   } 
   printf("Count of digits in given Name=%d\n",upcnt);
   
   getch();
   return 0;
}