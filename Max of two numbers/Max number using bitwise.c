#include<stdio.h>
#include<conio.h>
int main ()
{
   int N1,N2;
  
   printf("Enter two numbers:\n");
   scanf("%d%d",&N1,&N2);
   
   (N1==N2)? printf("Equal\n"):((N1>N2)? printf("1st is maximum\n"):printf("2nd is maximum\n"));
     
   printf("Thanks for input!!!\n");
    
   getch();
   return 0;
    
}
    