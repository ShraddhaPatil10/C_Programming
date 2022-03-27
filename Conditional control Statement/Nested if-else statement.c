#include<stdio.h>
#include<conio.h>
int main ()
{
   float budget=0;
   printf("Enter your budget:\n");
   scanf("%f",& budget);

   if(budget>10000);
   {
     if(budget>20000)
     {
       if(budget>50000)
       {
         printf("A++\n");
       }
       else
       {
         printf("A\n");
       }
     }
     else
     {
       if(budget>15000)
       {
         printf("B\n");
       }
       else
       {
         printf("C\n");
       }
     }
    }
    
     if(budget>5000)
     {
       if(budget>7500)
       {
         printf("D\n");
       }
       else
       {
         printf("E\n");
       }
     }
    
   else
   {
     printf("F\n");
   } 
  

   
   printf("Thanks for visiting!!!");

   getch ();
   return 0;
}