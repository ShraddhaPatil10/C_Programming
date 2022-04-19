#include<stdio.h>
#include<conio.h>
int main ()
{
   int i=0,j=0,R=0,C=0;

   printf("Enter Row value:\n");
   scanf("%d",&R);

   printf("Enter Column value:\n");
   scanf("%d",&C);

   printf("Pattern =>\n");

  for(i=1;i<=R;i++)
  {
    for(j=1;j<=C;j++)
    {
       printf(" * ");
    }
    printf("\n");
  }
  
  printf("Thanks!!!\n");
  getch ();
  return 0;
}