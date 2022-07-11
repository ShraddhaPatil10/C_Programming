#include<stdio.h>
#include<conio.h>

int Max(int,int);

int main ()
{
   int Num1=0,Num2=0;

    printf("\nEnter the two numbers to find maximum number:\n");
    scanf("%d%d",&Num1,&Num2);
    
    Max(Num1,Num2);
    
    getch();
    return 0;
}

int Max(int No1,int No2)
{
   int Max=0;

   if(No1>No2)
   {
        printf("\nThe maximum number is %d\n",No1);
   }
   else
   {
        printf("\nThe maximum number is %d\n",No2);
   }

   getch();
   return 0;
}