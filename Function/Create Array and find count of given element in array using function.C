#include<stdio.h>
#include<conio.h>

#define size 5 

void Accept_Array(int Num[]);
int Find_Count(int Num[]);

int main ()
{
    int cnt=0,values[5]={};
    
    Accept_Array(values);
    
    printf("\nBack To Main()");
    printf("\nPress key to move ahead.");
    
    cnt=Find_Count(values);
    
    printf("\n\nCount of given element in array = %d",cnt);
    
    getch();
    return 0;
}

void Accept_Array(int Num[])
{
      int i=0;
    
      printf("\nInside Accept array function=>\n");
    
      for(i=0;i<size;i++)
      {
         printf("\nEnter Element No %d =\n",i+1);
         scanf("%d",&Num[i]);
      }
      return;
}

int Find_Count(int Num[])
{
    int i=0,Res=0,Ele=0,cnt=0;
    
    printf("\nInside Find count function=>\n");
    printf("\nEnter element to search=>\n");
    scanf("%d",&Ele);
    
    for(i=0;i<size;i++)
    {
        if(Ele==Num[i])
        {
            cnt++;
        }
    }
     
    Res=cnt;
    
    return Res;
}
          