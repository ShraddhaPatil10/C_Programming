#include<stdio.h>
#include<conio.h>

int main ()
{
   char Name[20]={};
   int i=0,dcnt=0;
   printf("Enter your name:\n");
   gets(Name);

   while(Name[i]!='\0')
   {
        if(Name[i]>='0' && Name[i]<='9')
        {
           dcnt++;
        }
        i++;
   } 
   printf("Count of digits in given Name=%d\n",dcnt);
   
   getch();
   return 0;
}