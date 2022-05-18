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
       if(Name[i]>='A' && Name[i]<='Z')
       {
          Name[i]=Name[i]+32;
        }
    i++;
   }
 
   printf("Given string after conversion from capital to small=%s\n",Name);
   getch();
   return 0;
}