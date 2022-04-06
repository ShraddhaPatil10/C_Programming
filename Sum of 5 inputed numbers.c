#include<stdio.h>
#include<conio.h>
int main ()
{
   int num=0,i=0,sum=0;
   
   printf("Enter 5 numbers:\n");
   for(i=1;i<=5;i++)
   { 
      scanf("%d",&num);
      sum=sum+num;
    }
  
    
    printf("The addition of numbers = %d",sum);
    
    getch();
    return 0;
}