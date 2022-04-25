#include<stdio.h>
#include<conio.h>
int main ()
{
    char ch='A';
    int i=0,j=0,X=0;
    printf("Enter Row and column value:\n");
    scanf("%d",&X);
    
    printf("Pattern is=>\n");
    
    for(i=1;i<=X;i++)
    {
       for(ch='A',j=1;j<=X;j++,ch++)
       {
          if(i>=j)
          {
             printf(" %c ",ch);
             
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
        