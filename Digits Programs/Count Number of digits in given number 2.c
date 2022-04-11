#include<stdio.h>
#include<conio.h>
int main ()
{
   int No=0,dcnt=0;
   Up:
      printf("Enter a positive number:\n");
      scanf("%d",&No);
    
      if(No<=0)
      {
         printf("Enter positive integral number\n");
         goto Up;
      }
    
      while (No>0)
      {
             No=No/10;
             dcnt++;
      } 
    
      printf("Digits in given number = %d",dcnt);
    
      getch ();
      return 0;
}