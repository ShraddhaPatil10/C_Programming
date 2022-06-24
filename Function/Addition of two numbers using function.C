#include<stdio.h>
#include<conio.h>

void Addition()
{
    int Num1=0,Num2=0,Sum=0;

    printf("\n*******************\n");

    printf("Enter two numbers:\n");
    scanf("%d%d",&Num1,&Num2);

    Sum=Num1+Num2;

    printf("\n**********************\n");

    printf("\nAddition of %d and %d = %d\n",Num1,Num2,Sum);

    printf("\n**********************\n");
}
int main ()
{
    printf("Welcome\n");

    getch();
    Addition();

    printf("\nBack to main!!");
    printf("\nThanks!");

    getch();

    Addition();

    printf("\nInside Main\n");
    printf("\nThanks and Bye!!!");
}