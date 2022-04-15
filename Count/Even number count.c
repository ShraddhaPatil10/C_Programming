#include<stdio.h>
#include<conio.h>
int main ()
{
   int Num=0,Ecnt=0,i=0;

   printf("Enter 10 Numbers to find Even number Count=>\n");

   for(i=0;i<10;i++)
   {
      printf("Enter Number %d =",i);
      scanf("%d",&Num);
     
      if(Num%2==0)
      {
         Ecnt++;
      }
   }
    printf("Count of Even number = %d",Ecnt);
    
    getch();
    return 0;
}