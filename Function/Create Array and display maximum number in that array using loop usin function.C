#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define size 5

void Accept_Array(int Num[]);
void Display_Array(int Arr[]);
void Maximum(int Max_num[]);

int main()
{
    int values[5]={0};
    
    Accept_Array(values);
    
    printf("\n\nBack to main()");
    printf("\n\nPrss Any Key To Move Ahead.");
    
    getch();
    
    Display_Array(values);
    
    printf("\n\nPress key to move ahead.");
    getch();
    
    Maximum(values);
    
    getch();
    return 0;
    
}

void Accept_Array(int Num[])
{
     int i=0;
    
     printf("\nInside Accept Element=>\n");
    
     for(i=0;i<size;i++)
     {
        printf("\nEnter Element No %d=",i+1);
        scanf("%d",&Num[i]);
     }
      
     return;
}
void Display_Array(int Arr[])
{
     int i=0;
    
      printf("\nElements In Array Inside Display Function");
    
      for(i=0;i<size;i++)
      {
          printf("\nValue of %d element = %d",i+1,Arr[i]);
      }
       
      return;
}

void Maximum(int Max_num[])
{
    int i=0,max=0;
    
    printf("\n\nInside Maximum Function");
    
    for(i=0;i<size;i++)
    {
       if((i==0) || (Max_num[i]>max))
       {
           max=Max_num[i];
       }
    }
     
    printf("\nThe Maximum number is = %d",max);
    
    return;
}
    
    