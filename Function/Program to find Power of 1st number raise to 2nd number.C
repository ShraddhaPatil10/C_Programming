#include<stdio.h>
#include<conio.h>

int Pow(int,int);

int main()
{
     int No1=0,No2=0;
     Up:
        printf("\nEnter the number to find Power(No1^No2)\n");
        scanf("%d%d",&No1,&No2);
        
        if(No2<0)
        {
           printf("\nDo enter the positive number\n");
        
           getch();
           return 0;
        }
        
        printf("\nPower(%d^%d)=%d",No1,No2,Pow(No1,No2));
        getch();
        return 0;
}
int Pow(int Base,int Exp) 
{
    int Pow=1;
    
    if(Base==1 || Exp==0)
    {
        goto DWN;
    }
    else if(Base==0)
    {
       Pow=0;
       goto DWN;
    }
    else if(Exp==1)
    {
       Pow=Base;
       goto DWN;
    }
    else
    {
        while(Exp>0)
        {
           Pow=Pow*Base;
           Exp--;
        }
     }
     DWN:
        return Pow;
}