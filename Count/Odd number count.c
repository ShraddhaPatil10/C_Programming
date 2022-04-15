#include<stdio.h>
#include<conio.h>
int main ()
{
   int Num=0,Ocnt=0,i=0;

   printf("Enter 10 Numbers to find Odd number Count=>\n");

   for(i=0;i<10;i++)
   {
      printf("Enter Number %d =",i);
      scanf("%d",&Num);
     
      if(Num%2==1)
      {
         Ocnt++;
      }
   }
    printf("Count of Odd number = %d",Ocnt);
    
    getch();
    return 0;
}