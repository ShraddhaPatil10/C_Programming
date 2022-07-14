#include<stdio.h>
#include<conio.h>

int Table(int,int);

int main ()
{
     int Num1=0,Num2=0;
    
     printf("\nEnter the Starting number:\n");
     scanf("%d",&Num1);
    
     printf("\nEnter the ending number:\n");
     scanf("%d",&Num2);
    
     Table(Num1,Num2);
    
     getch();
     return 0;
}

int Table(int S_num,int E_num)
{
       int Num=0,cnt=0;
    
       printf("\nMultiplication table is=>\n");
       printf("\n***************************************\n");
    
       for(cnt=1;cnt<=10;cnt++)
       {
           for(Num=S_num;Num<=E_num;Num++)
           {
               printf(" %2d ",(Num*cnt));
           }
           printf("\n");
       }
    
       printf("\n****************************************\n");
    
       return Table;
}
    