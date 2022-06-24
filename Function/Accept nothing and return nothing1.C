#include<stdio.h>
#include<conio.h>

void Add(void);

int main()
{
    printf("\nWelcome\n");
    getch();

    Add();

    printf("\nThanks!!!");

    getch();
    return 0;
}

void Add()
{
    int No1=0,No2=0,Sum=0;

    printf("\nEnter two numbers for addition=>\n");
    scanf("%d%d",&No1,&No2);

    Sum=No1+No2;

    printf("\nAddition of %d and %d = %d",No1,No2,Sum);

    return;
}