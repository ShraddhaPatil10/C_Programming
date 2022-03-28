#include<stdio.h>
#include<conio.h>
int main ()
{
   int Num=0,cnt=0;
   printf("Enter a number to get table:\n");
   scanf("%d",&Num);

   printf("Table for %d is:\n",Num);

   for(cnt=1;cnt<=10;cnt++)
   {
      printf("%d\n",(Num*cnt));
   }
   printf("Thanks\n");

   getch();
   return 0;
}