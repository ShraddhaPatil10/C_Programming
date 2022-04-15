#include<stdio.h>
#include<conio.h>
int main ()
{
    int Num=0,Fact=0,Temp=0;
    Start:
         printf("Enter a number to find its factorial:\n");
         scanf("%d",&Num);
        
         if(Num<1)
         {
            printf("Invalid number,Enter a positive number\n");
            goto Start;
         }
        
         for(Fact=1,Temp=Num;Temp>0;Temp--)
         {
            Fact=Fact*Temp;
         }
          
         printf("Factorial of %d = %d",Num,Fact);
        
        getch();
        return 0;
}