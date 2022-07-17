#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define size 5

void Accept_Array(int Num[]);
void Display_Array(int Arr[]);
int Maximum(int Max_num[]);
int Second_Max(int S_max[],int);


int main()
{
    int values[5]={0},Res1=0,Res2=0;
    
    Accept_Array(values);
    
    printf("\n\nBack to main()");
    printf("\n\nPrss Any Key To Move Ahead.");
    
    getch();
    
    Display_Array(values);
    
    printf("\n\nPress key to move ahead.");
    getch();
    
    Res1=Maximum(values);
    printf("\n\nMaximum element of array = %d",Res1);
    getch();
    
    Res2=Second_Max(values,Res1);
    printf("\nSecond maximum element of array = %d",Res2);
    
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

int Maximum(int Max_num[])
{
    int i=0,max=0;
    
    for(i=0;i<size;i++)
    {
       if((i==0) || (Max_num[i]>max))
       {
           max=Max_num[i];
       }
    }
    
    return max;
}

int Second_Max(int Num[],Res1)
{
    int i=0,S_max=0;
    
    for(i=0;i<size;i++)
    {
        if((S_max<Num[i]) && (Num[i]!=Res1))
        {
             S_max=Num[i];
        }
    }
    return S_max;
}