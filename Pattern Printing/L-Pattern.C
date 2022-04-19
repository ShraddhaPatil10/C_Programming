#include<stdio.h>
#include<conio.h>
int main ()
{
   int i=0,j=0,R=0,C=0;
   printf("Enter value of row:\n\n");
   scanf("%d",&R);

   printf("Enter value of column:\n\n");
   scanf("%d",&C);

   printf("Pattern=>\n\n");

   for(i=1;i<=R;i++)
   {
      for(j=1;j<=C;j++)
       {
         if(j==1 || i==R)
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
        
        
        