#include<stdio.h>
#include<conio.h>
int main ()
{
   int N1,N2;
  
   printf("Enter two numbers:\n");
   scanf("%d%d",&N1,&N2);
   

   if(N1==N2)
   {
      printf("Given two numbers are equal\n");
   }
   else if(N1>N2)
   {
      printf("%d is greater than %d",N1,N2);
   }
   else
   {
     printf("%d is greater than %d",N2,N1);
   }
    
   getch();
   return 0;
    
}
    