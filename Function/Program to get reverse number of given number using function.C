#include<stdio.h>
#include<conio.h>

int Reverse(int);

int main()
{
    int Num=0;
    Up:
       printf("\nEnter the number to reverse it:\n");
       scanf("%d",&Num);
    
       if(Num<0)
       {
           printf("\nDo enter the positive Number.\n");
           goto Up;
       }
    
       Reverse(Num);
    
       getch();
       return 0;
}

int Reverse(int No)
{
    int Dig=0,Rev=0,Temp=0;
    
    Temp=No;
    while(Temp>0)
    {
        Dig=Temp%10;
        Rev=(Rev*10)+Dig;
        Temp=Temp/10;
    }
    
    printf("\nReverse of %d => %d\n",No,Rev);
    
    getch();
    return 0;
}