#include<stdio.h>
#include<conio.h>
int main ()
{
       int No=0,Temp=0,Dig=0,Rev=0;
       Up:
          printf("Enter a positive number=\n");
          scanf("%d",&No);
        
          if(No<=0)
          {
             printf("Enter +ve Integral value\n");
             goto Up;
          }
          Temp=No;
        
          while(Temp>0)
          {
             Dig=Temp%10;
             Rev=(Rev*10)+Dig;
             Temp=Temp/10;
          }
        
          printf("Reverse of %d = %d",No,Rev);
        
          getch();
          return 0;
    
}