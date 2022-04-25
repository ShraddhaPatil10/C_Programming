#include<stdio.h>
#include<conio.h>
int main ()
{
    int Num=0,i=0,j=0,X=0;
    
    printf("Enter Row and column value:\n");
    scanf("%d",&X);
    
    printf("Pattern is=>\n");
    
    Num=1;
    for(i=1;i<=X;i++)
    {
       for(j=1;j<=X;j++)
       {
          if(i>=j)
          {
             printf(" %d ",Num);
             Num++;
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