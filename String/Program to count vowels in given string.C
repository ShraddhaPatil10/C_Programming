#include<stdio.h>
#include<conio.h>

int main ()
{
   char Name[20]={};
   int i=0, Vcnt=0;
   printf("Enter your name:\n");
   gets(Name);

   while(Name[i]!='\0')
   {
        if(Name[i]=='a' || Name[i]=='e' || Name[i]=='i' || Name[i]=='o' || Name[i]=='u' || Name[i]=='A' || Name[i]=='E' || Name[i]=='I' || Name[i]=='O' || Name[i]=='U')
      
        {
           Vcnt++;
        }
        i++;
   } 
   printf("Count of digits in given Name=%d\n",Vcnt);
   
   getch();
   return 0;
}