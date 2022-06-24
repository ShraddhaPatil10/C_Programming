#include<stdio.h>
#include<conio.h>

void Add(int, int);

int main ()
{
    int No1=0,No2=0;

    printf("\nEnter two numbers for addition:\n");
    scanf("%d%d",&No1,&No2);

    Add(No1,No2);

    getch();
    return 0;
}

void Add(int N1,int N2)
{
    int Sum=0;

    Sum=N1+N2;

    printf("\nAddition of %d and %d = %d",N1,N2,Sum);

    return;
}