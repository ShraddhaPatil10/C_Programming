#include<stdio.h>
#include<conio.h>

int Max(int,int,int);

int main ()
{
   int Num1=0,Num2=0,Num3=0;

    printf("\nEnter the three numbers to find maximum number:\n");
    scanf("%d%d%d",&Num1,&Num2,&Num3);
    
    Max(Num1,Num2,Num3);
    
    getch();
    return 0;
}

int Max(int No1,int No2,int No3)
{

   if(No1>No2 && No1>No3)
   {
        printf("\nThe maximum number is %d\n",No1);
   }
   else if(No2>No1 && No2>No3)
   {
        printf("\nThe maximum number is %d\n",No2);
   }
   else 
   {
       printf("\nThe maximum number is %d",No3);
   }

   getch();
   return 0;
}