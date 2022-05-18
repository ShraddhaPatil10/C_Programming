#include<stdio.h>
#include<conio.h>

int main ()
{
   char Name[20]={};
   int i=0,lowcnt=0;
   printf("Enter your name:\n");
   gets(Name);

   while(Name[i]!='\0')
   {
        if(Name[i]>='a' && Name[i]<='z')
        {
           lowcnt++;
        }
        i++;
   } 
   printf("Count of digits in given Name=%d\n",lowcnt);
   
   getch();
   return 0;
}