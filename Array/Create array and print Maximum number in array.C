#include<stdio.h>
#include<conio.h>

#define size 10

int main ()
{
   int i=0,Bill[size]={0},Max=0;

   for(i=0;i<size;i++)
   {
       printf("Enter Bill no %d=",(i+1));
       scanf("%d",&Bill[i]);

       if((i==1) || (Bill[i]>Max))
      {
          Max = Bill[i];
      }
   }
       printf("The maximum number in array=>%d\n",Max);
    
    getch();
    return 0;
}


