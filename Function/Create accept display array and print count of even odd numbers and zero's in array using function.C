#include<stdio.h>
#include<conio.h>

#define size 5 

void Accept_Array(int Num[]);
void Display_Array(int Arr[]);
int Find_Ecnt(int Num[]);
int Find_Ocnt(int Num[]);
int Find_Zcnt(int Num[]);

int main ()
{
    int cnt=0,values[5]={},Res1=0,Res2=0,Res3=0;
    
    Accept_Array(values);
    
    printf("\nBack To Main()");
    printf("\nPress key to move ahead.");
    
    getch();
    
    Display_Array(values);
    
    getch();
    
    Res1=Find_Ecnt(values);
    
    Res2=Find_Ocnt(values);
    
    Res3=Find_Zcnt(values);
    
    printf("\n\n\nThe count of Even numbers=>%d",Res1);
    printf("\nThe count of odd numbers=>%d",Res2);
    printf("\nThe count of zero's     =>%d",Res3);
             
    getch();
    return 0;
}

void Accept_Array(int Num[])
{
      int i=0;
    
      printf("\nInside Accept Array function=>\n");
    
      for(i=0;i<size;i++)
      {
         printf("\nEnter Element No %d =\n",i+1);
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

int Find_Ecnt(int Num[])
{
    int i=0,Res1=0,cnt=0,Ecnt=0;
    
    
    for(i=0;i<size;i++)
    {
        if((Num[i]!=0) && (Num[i]%2==0))
        {
           Ecnt++;
        }
    }
    
    Res1=Ecnt;
  
    return Res1;
}

int Find_Ocnt(int Num[])
{
    int i=0,Res2=0,cnt=0,Ocnt=0;
    
    for(i=0;i<size;i++)
    {
        if(Num[i]%2==1)
        {
           Ocnt++;
        }
    }
    
    Res2=Ocnt;
  
    return Res2;
    }
int Find_Zcnt(int Num[])
{
    int i=0,Res3=0,cnt=0,Zcnt=0;
    
    for(i=0;i<size;i++)
    {
        if(Num[i]==0)
        {
           Zcnt++;
        }
    }
    
    Res3=Zcnt;
  
    return Res3;
}
