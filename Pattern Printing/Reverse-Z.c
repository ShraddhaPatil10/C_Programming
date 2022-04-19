#include<stdio.h>
#include<conio.h>
int main ()
{
   int i=0,j=0,X=0;
   printf("Enter value of row and column:\n");
   scanf("%d",&X);

   for(i=1;i<=X;i++)
   {
      for(j=1;j<=X;j++)
       {
         if(i==1 || i==X|| i==j )
         {
            printf(" * ");
          }
          else 
          {
             printf("   ");
          }
        }
          printf("\n");
     }
      printf("Thanks!!\n");
      getch();
      return 0;
}  
        
        
        