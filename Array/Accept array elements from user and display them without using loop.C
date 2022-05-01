#include<stdio.h>
#include<conio.h>
int main ()
{
   int values[10]={0};
 
   printf("Enter Element No.1= ");
   scanf("%d",& values[0]);
   printf("Enter Element No.2= ");
   scanf("%d",& values[1]);
   printf("Enter Element No.3= ");
   scanf("%d",& values[2]);
   printf("Enter Element No.4= ");
   scanf("%d",& values[3]);
   printf("Enter Element No.5= ");
   scanf("%d",& values[4]);

   printf("Press any key to move ahead\n");
   getch();

   printf("Elements in array are=>\n\n");

   printf("Value of 101 element = %d\n", values[0]);
   printf("Value of 102 element = %d\n", values[1]);
   printf("Value of 103 element = %d\n", values[2]);
   printf("Value of 104 element = %d\n", values[3]);
   printf("Value of 105 element = %d\n", values[4]);
    

    getch();
    return 0;
}
    