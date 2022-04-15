#include<stdio.h>
#include<conio.h>
int main ()
{
    int Num=0,Temp=0,Dig=0,Rev=0;
    printf("Enter the positive number:\n");
    scanf("%d",&Num);
    
    Up:
      if(Num<=0)
      {
         printf("Enter the +ve Integral number\n");
         goto Up;
      }
     
      Temp=Num;
    
      while(Temp>0)
     {
        Dig=Temp%10;
        Rev=(Rev*10)+Dig;
        Temp=Temp/10;
     }
     if(Num==Rev)
     {
        printf("%d is palindrome\n",Num);
     }
     else
     {
        printf("%d is not palindrome\n",Num);
     }
    
     getch ();
     return 0;
}
    
    