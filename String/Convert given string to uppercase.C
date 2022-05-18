#include<stdio.h>
#include<conio.h>

int main ()
{
   char Name[20]={};
   int i=0,cnt=0;
   printf("Enter name:\n");
   gets(Name);

   while(Name[i]!='\0')
   {
       if(Name[i]>='a' && Name[i]<='z')
       {
          Name[i]=Name[i]-32;
        }
    i++;
   }
 
   printf("Given string after capitalisation=%s\n",Name);
   getch();
   return 0;
}