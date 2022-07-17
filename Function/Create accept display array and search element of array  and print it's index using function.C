#include<stdio.h>
#include<conio.h>

#define size 5 

void Accept_Array(int Num[]);
void Display_Array(int Arr[]);
void Find_Index(int Num[]);

int main ()
{
    int cnt=0,values[5]={},Res=0;
    
    Accept_Array(values);
    
    printf("\nBack To Main()");
    printf("\nPress key to move ahead.");
    
    getch();
    
    Display_Array(values);
    
    getch();
     
    Find_Index(values);     
    
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

void Find_Index(int Num[])
{
     int i=0,Ele=0;
    
     printf("\nEnter element to search=>\n");
     scanf("%d",&Ele);
    
     for(i=0;i<size;i++)
     {
        if(Ele==Num[i])
        {
            break;
         }
     }
    
     if(i==size)
     {
          printf("\nNo such element found in array");
     }
     else
     {
         printf("\nIndex of %d element is = %d\n",Ele,i);
     }
    return;
}