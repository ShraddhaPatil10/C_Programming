#include<stdio.h>
#include<conio.h>
int main()
{
   int i=0,num=0, Positive=0,cnt=0;
   printf("Enter ten numbers to print count of positive numbers:\n");

   for(i=0;i<10;i++)
   {
      scanf("%d",&num);
     
      if(num>0)
     {
         Positive=num;
         cnt=cnt+1;    
     }
   }

    printf("The count of +ve numbers=%d", cnt);

    getch();
    return 0;
}