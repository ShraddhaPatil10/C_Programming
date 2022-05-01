#include<stdio.h>
#include<conio.h>

int main ()
{
   int values[5]={0};
  
   printf("Value of 1st element = %d\n", values[0]);
   printf("Value of 1st element = %d\n", values[1]);
   printf("Value of 1st element = %d\n", values[2]);
   printf("Value of 1st element = %d\n", values[3]);
   printf("Value of 1st element = %d\n", values[4]);

   printf("Press any key to continue:\n\n");
   getch();

   values[4]=50;
   values[2]=100;
   values[0]=94;

   printf("New values=>\n\n");

   printf("Value of 101 element =%d\n", values[0]);
   printf("Value of 102 element =%d\n", values[1]);
   printf("Value of 103 element =%d\n", values[2]);
   printf("Value of 104 element =%d\n", values[3]);
   printf("Value of 105 element =%d\n", values[4]);

   getch();
   return 0;
}
