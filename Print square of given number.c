#include<stdio.h>
#include<conio.h>
int main ()
{
   int num=0,sqr=0;
   printf("Enter the number to find it's square:\n");
   scanf("%d",&num);

   sqr=num*num;
   printf("Square of %d = %d",num,sqr);

   getch ();
   return 0;
}