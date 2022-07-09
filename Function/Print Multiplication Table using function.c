#include<stdio.h>
#include<conio.h>

void Print_Table(int);

int main()
{
   int Num=0;

   printf("\nEnter Number to get it's multiplication table:\n");
   scanf("%d",&Num);

   Print_Table(Num);

   getch();
   return 0;
}


void Print_Table(int Num)
{
    int i=0;
    printf("\nMultiplication Table=>\n");
    for(i=1;i<=10;i++)
    {
       printf("\n%d",Num*i);
    }
}