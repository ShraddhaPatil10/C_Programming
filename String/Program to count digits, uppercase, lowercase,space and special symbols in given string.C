#include<stdio.h>
#include<conio.h>

int main ()
{
   char Name[20]={};
   int i=0,dcnt=0,capcnt=0,smallcnt=0,spacecnt=0,splcnt=0;
   printf("Enter your name:\n");
   gets(Name);

   while(Name[i]!='\0')
   {
       if(Name[i]>='A' && Name[i]<='Z')
       {
           capcnt++;
        }
        else if(Name[i]>='a' && Name[i]<='z')
        {
           smallcnt++;
        }
        else if(Name[i]>='0' && Name[i]<='9')
        {
           dcnt++;
        }
        else if(Name[i]==' ')
        {
           spacecnt++;
        }
        else
        {
            splcnt++;
        }
        i++;
   }
 
   printf("Capital letters count in given Name=%d\n",capcnt);
   printf("Small letters count in given Name=%d\n",smallcnt);
   printf("Count of space in given Name=%d\n",spacecnt);
   printf("Count of digits in given Name=%d\n",dcnt);
   printf("Count of special symbols in given Name=%d\n",splcnt);

   getch();
   return 0;
}