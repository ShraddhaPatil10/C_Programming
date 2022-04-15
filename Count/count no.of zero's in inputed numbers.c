#include<stdio.h>
#include<conio.h>
int main()
{
   int i=0,num=0, Value=0,cnt=0,N=0;
   printf("How many numbers are you want:\n");
   scanf("%d",&N);

   printf("Enter the numbers:\n");
   for(i=0;i<N;i++)
   {
      scanf("%d",&num);
     
      if(num==0)
     {
         Value=num;
         cnt=cnt+1;    
     }
   }

    printf("The count of zero =%d", cnt);

    getch();
    return 0;
}