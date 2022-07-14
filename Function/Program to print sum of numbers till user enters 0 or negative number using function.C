#include<stdio.h>
#include<conio.h>

int Sum(void);

int main ()
{
    printf("\nEnter the numbers for Addition:");
    printf("\nNote:For stoping addition enter 0 or negative number...\n");
    
    Sum();
    
    getch();
    return 0;
}

int Sum()
{
     int sum=0,Num=0;
    
     while(1)
     {
         scanf("%d",&Num);
        
         if(Num<=0)
         {
              break;
         }
        
         sum=sum+Num;
     }
    
     printf("\nThe addition of numbers=%d",sum);
        
     return sum;
}
      