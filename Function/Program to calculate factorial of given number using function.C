#include<stdio.h>
#include<conio.h>

long long int Factorial_Of_Number(int);

int main ()
{
    int No=0;
    long long int Res=0;

    printf("\nEnter Number to calculate it's Factorial:\n");
    scanf("%d",&No);

    Res=Factorial_Of_Number(No);

    printf("\nFactorial of Number %d is = %lld",No,Res);

    printf("\nThanks");

    getch();
    return 0;
}

long long int Factorial_Of_Number(int Num)
{
    long long int Fact=1;

    while(Num>0)
    {
        Fact=Fact*Num;
        Num--;
    }

    return Fact;
}