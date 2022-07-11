#include<stdio.h>
#include<conio.h>

int Even_Odd(int);

int main ()
{
   int Num=0;

    printf("\nEnter the number to find number is even or odd:\n");
    scanf("%d",&Num);
    
    Even_Odd(Num);
    
    getch();
    return 0;
}

int Even_Odd(int No)
{

   if(No%2==0)
   {
        printf("\n%d is even number\n",No);
   }
   else
   {
        printf("\n%d is odd number\n",No);
   }

   getch();
   return 0;
}