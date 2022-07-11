#include<stdio.h>
#include<conio.h>

long int Factorial(int);

int main ()
{
    int No=0;
    printf("\nEnter number to find it's Factorial:\n");
    scanf("%d",&No);
    
    printf("\nThe factorial of %d = %d\n",No,Factorial(No));
    
    getch();
    return 0;
}

long int Factorial(int Num)
{
     long int Fac=1;
    
     if(Num<0)
     {
        while(Num<0)
        {
           Fac=Fac*Num;
           Num++;
        }
     }
     else
     {
         while(Num>1)
         {
             Fac=Fac*Num;
             Num--;
         }
     }
     return Fac;
}
    
