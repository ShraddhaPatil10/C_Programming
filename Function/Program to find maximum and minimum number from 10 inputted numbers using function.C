#include<stdio.h>
#include<conio.h>

void Result(void);

int main()
{
     printf("\nEnter the 10 numbers:\n");
    
     Result();
    
     getch();
     return 0;
}

void Result()
{
     int i=0,Num=0,Max=0,Min=0;
    
     for(i=1;i<=10;i++)
     {
         scanf("%d",&Num);
        
         if((i==1) || (Max<Num))
         {
            Max=Num;
         }
         if((i==1) || (Min>Num))
         {
            Min=Num;
         }
     }
       
    printf("\nThe maximum element is = %d",Max);
    printf("\nThe minimum element is = %d",Min);
    
    return;
}