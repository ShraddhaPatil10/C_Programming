#include<stdio.h>
#include<conio.h>
int main ()
{
   int num=0,cube=0;
   printf("Enter the number to find it's cube:\n");
   scanf("%d",&num);

   cube=num*num*num;
   printf("Cube of %d = %d",num,cube);

   getch ();
   return 0;
}