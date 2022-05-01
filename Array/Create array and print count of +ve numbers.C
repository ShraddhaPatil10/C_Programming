#include<stdio.h>
#include<conio.h>

#define size 10

int main ()
{
   int i=0,Bill[size]={0},cnt=0;

   for(i=0;i<size;i++)
   {
       printf("Enter Bill no %d=",(i+1));
       scanf("%d",&Bill[i]);

       if(Bill[i]>0)
      {
          cnt++;
      }
   }
     printf("The count of +ve numbers in array=>%d\n",cnt);
    
    getch();
    return 0;
}


