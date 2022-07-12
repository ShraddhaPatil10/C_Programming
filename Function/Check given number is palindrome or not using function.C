#include<stdio.h>
#include<conio.h>

void Palindrome(int);

int main()
{
    int Num=0;
    
    Up:
       printf("\nEnter the number:\n");
       scanf("%d",&Num);
    
    if(Num<=0)
    {
        printf("\nDo enter positive number\n");
        goto Up;
    }
    
    
    Palindrome(Num);
   
    getch();
    return 0;
}

void Palindrome(int No)
{
     int Dig=0,Rev=0,Temp=0;
    
     Temp=No;
    
     while(Temp>0)
    {
       Dig=Temp%10;
       Rev=(Rev*10)+Dig;
       Temp=Temp/10;
    }
    
    if(No==Rev)
    {
        printf("\n%d is a palindrome\n",No);
    }
    else
    {
        printf("\n%d is not palindrome\n",No);
    }
    
    getch();
    return;
}
   