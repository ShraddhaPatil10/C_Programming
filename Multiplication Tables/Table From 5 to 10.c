#include<stdio.h>
#include<conio.h>
int main ()
{
   int Num=0,cnt=1,S_Num=5,E_Num=10;

   printf("*********Multiplication Table**********\n");

   for(Num=S_Num;Num<=E_Num;Num++)
   {
     for(cnt=1;cnt<=10;cnt++)
     {
       printf(" %2d ",(Num*cnt));
     }
      printf("\n");
   }

   printf("*********Multiplication Table**********\n");

   printf("Thanks!!!\n");

   getche();
   return 0;
}