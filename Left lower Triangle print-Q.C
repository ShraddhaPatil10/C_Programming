#include<stdio.h>
#include<conio.h>
int main ()
{
    int Num=0,i=0,j=0,X=0;
    
    printf("Enter rows and columns value:\n");
    scanf("%d",&X);
    
    printf("Pattern is=>\n");
    
    for(i=1;i<=X;i++)
    {
       for(j=1;j<=X;j++)
       {
         if(i>=j)
         {
             printf(" Q ");
         }
         else
         {
              printf("   ");
         }
      }
       printf("\n");
    }
    
    
    printf("Thanks!!!\n");
    getch();
    return 0;
}
        