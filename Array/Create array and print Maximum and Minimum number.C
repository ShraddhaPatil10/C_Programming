#include<stdio.h>
#include<conio.h>

#define size 10

int main ()
{
   int i=0,Bill[size]={0},max=0,min=0;

   for(i=0;i<size;i++)
   {
       printf("Enter Bill no %d=",(i+1));
       scanf("%d",&Bill[i]);


       if((i==1) || (Bill[i]>max))
      {
          max=Bill[i]; 
      }
      if((i==1) || (Bill[i]<min))
      {
         min=Bill[i];
      }
    }
    
      printf("The Maximum element of array=>%d\n",max);
      printf("The Minimum element of array=>%d\n",min);
      
    
      getch();
      return 0;
}


    