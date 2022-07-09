#include<stdio.h>
#include<conio.h>

int Digit_sum(int);

int main()
{
    int Num=0;
    Up:
       printf("\nEnter the positive number=\n");
       scanf("%d",&Num);
    
       if(Num<=0)
       {
           printf("\nDo enter a positive number\n");
           goto Up;
       }
    
       Digit_sum(Num);
    
       getch();
       return 0;
}

int Digit_sum(int No)
{
    int Dig=0,dsum=0,Temp=0;
    
    Temp=No;
    
    while(Temp>0)
    {
        Dig=Temp%10;
        dsum=dsum+Dig;
        Temp=Temp/10;
    }
    
    printf("\nSum of digits in %d number = %d\n",No,dsum);
    
    getch();
    return 0;
    
}
       