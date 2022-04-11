#include<stdio.h>
#include<conio.h>
int main ()
{
   int No=0,dcnt=0,Temp=0;
   Up:
      printf("Enter a positive number:\n");
      scanf("%d",&No);
    
      if(No<=0)
      {
         printf("Enter positive integral number\n");
         goto Up;
      }
    
      Temp=No;
    
      while (Temp>0)
      {
             Temp=Temp/10;
             dcnt++;
      } 
    
      printf("Digits in %d number = %d",No,dcnt);
    
      getch ();
      return 0;
}