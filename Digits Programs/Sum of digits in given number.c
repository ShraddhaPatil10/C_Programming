#include<stdio.h>
#include<conio.h>
int main ()
{
    int No=0,Dig=0,dSum=0,Temp=0;
    
    Up:
       printf("Enter a positive number:\n");
       scanf("%d",&No);
    
       if(No<=0)
       {
          printf("Enter the positive integral number:\n");
          goto Up;
       }
    
       Temp=No;
      
       while (Temp>0)
       {
           Dig=Temp%10;
           dSum=dSum+Dig;
           Temp=Temp/10;
       }
          
      
       printf("Digits sum in %d number = %d",No,dSum);
    
       getch();
       return 0;
    
}