#include<stdio.h>
#include<conio.h>

void Even_Odd(int);

int main()
{
    int Num=0;
    Up:
       printf("\nEnter the number:\n");
       scanf("%d",&Num);
    
       if(Num<=0)
       {
          printf("\nDo enter the positive number..");
          goto Up;
       }
  
    Even_Odd(Num);
    
    getch();
    return 0;
}
void Even_Odd(No)
{
     int Dig=0,Temp=0,Ecnt=0,Ocnt=0;
    
     Temp=No;
     
     while(Temp>0)
     {
         Dig=Temp%10;
         Temp=Temp/10;
        
         if(Dig%2==0)
        {
            Ecnt++;
        }
        else
       {
           Ocnt++;
       }
    }
    
     printf("\nThe count of even numbers=%d\n",Ecnt);
     printf("\nThe count of odd numbers=%d\n",Ocnt);
    
     return;
      
}
       