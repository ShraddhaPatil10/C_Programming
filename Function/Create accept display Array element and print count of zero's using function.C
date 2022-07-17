#include<stdio.h>
#include<conio.h>

#define size 5 

void Accept_Array(int Num[]);
void Display_Array(int Arr[]);
int Find_Zcnt(int Num[]);

int main ()
{
    int cnt=0,values[5]={},Res=0;
    
    Accept_Array(values);
    
    printf("\nBack To Main()");
    printf("\nPress key to move ahead.");
    
    getch();
    
    Display_Array(values);
    
    getch();
    
    Res=Find_Zcnt(values);
    
    printf("\n\n\nThe count of zero's=>%d",Res);
             
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

int Find_Zcnt(int Num[])
{
    int i=0,Res=0,cnt=0,Zcnt=0;
    
    
    for(i=0;i<size;i++)
    {
        if(Num[i]==0)
        {
           Zcnt++;
        }
    }
    
    Res=Zcnt;
  
    return Res;
}

