#include<stdio.h>
#include<conio.h>
int main ()
{
     float amount=0;
    
    printf("Enter your account balance:\n");
    scanf("%f",&amount);
    
    if(amount>1000)
    {
       printf("Welcome 🤗\n");
       printf("Enjoy your shopping!!!\n");
    }
    else
    {
       printf("You have no sufficient balance for shopping\n");
       printf("You are not eligible for shopping\n");
    }
    printf("Thanks for visiting!!!");
}