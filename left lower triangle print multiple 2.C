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
       for(Num=1,j=1;j<=X;j++,Num++)
       {
         if(i>=j)
         {
             printf(" %d ",Num*2);
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
        