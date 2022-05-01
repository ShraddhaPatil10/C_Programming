#include<stdio.h>
#include<conio.h>

#define size 10

int main ()
{
   int i=0,Bill[size]={0},Min=0;

   for(i=0;i<size;i++)
   {
       printf("Enter Bill no %d=",(i+1));
       scanf("%d",&Bill[i]);

       if((i==1) || (Bill[i]<Min))
      {
          Min = Bill[i];
      }
   }
     printf("The minimum number in array=>%d\n",Min);
    
    getch();
    return 0;
}


