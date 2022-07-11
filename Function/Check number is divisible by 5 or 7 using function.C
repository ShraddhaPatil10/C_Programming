#include<stdio.h>
#include<conio.h>

int Div(int);

int main()
{
    int Num=0;
    printf("\nEnter the number to check whether the number is divisible by 5 or 7=>\n");
    
    scanf("%d",&Num);
    
    Div(Num);
    
    getch();
    return 0;
}

int Div(No)
{
     if(No%5==0 && No%7==0)
     {
        printf("\n%d is divisible by 5 and 7\n",No); 
     }
     else if(No%5==0)
     {
        printf("\n%d is divisible by 5\n",No);
     }
     else if(No%7==0)
     {
         printf("\n%d is divisible by 7\n",No);
     }
     else 
     {
         printf("\n%d is not divisible by 5 and 7 also\n",No);
     }
     
      getch();
      return 0;
}