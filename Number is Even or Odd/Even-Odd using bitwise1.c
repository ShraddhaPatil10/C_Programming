#include<stdio.h>
#include<conio.h>
int main ()
{
   int num;

   printf("Enter one number:\n");
   scanf("%d",&num);


   (num==0)?printf("%d is Netral\n",num):((num%2==0)?printf("%d is Even number\n",num):printf("%d is Odd number\n",num));
   

   printf("Thanks for Input\n");
    
   getch();
   return 0;
    
}
    