#include<stdio.h>
#include<conio.h>

int Table(int,int);

int main ()
{
     int Num1=0,Num2=0;
    
     Num1=5;
     Num2=10;
    
     Table(Num1,Num2);
    
     getch();
     return 0;
}
int Table(int S_num,int E_num)
{
     int num=0,cnt=0;
    
     printf("\nMultiplication Table is =>\n");
     printf("\n****************************************\n");
     for(cnt=1;cnt<=10;cnt++)
     {
          for(num=S_num;num<=E_num;num++)
         {
             printf(" %4d ",num*cnt);
          }
          printf("\n");
     }
     printf("\n**************************************\n");
    
     return Table;
}
    