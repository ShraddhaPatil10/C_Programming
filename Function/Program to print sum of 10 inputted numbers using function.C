#include<stdio.h>
#include<conio.h>

void Sum();

int main()
{
    
     Sum();
      
     getch();
     return 0;
}

void Sum()
{
    int i=0,sum=0,Num=0;
    
    printf("\nEnter 10 numbers for Addition:\n");
    for(i=1;i<=5;i++)
    {
        printf("\nEnter %d number:",i);
        scanf("%d",&Num);
        sum=sum+Num;
    }
     
    printf("\nThe sum of 10 inputted numbers=%d\n",sum);
    return;
}