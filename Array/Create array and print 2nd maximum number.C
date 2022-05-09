#include<stdio.h>
#include<conio.h>
#define size 5

int main ()
{
    int i=0,Ele=0,Bill[size]={},Max=0,S_Max=0;
    
    for(i=0;i<size;i++)
    {
       printf("Enter Bill no %d=",(i+1));
       scanf("%d",&Bill[i]);
    }
    
    for(i=0;i<size;i++)
    {
       if((i==0) || (Bill[i]>Max))
       {
          Max=Bill[i];
       }
    }
    
    for(i=0;i<size;i++)
    {
       if((Bill[i]!=Max) && (Bill[i]>S_Max))
       {
         S_Max=Bill[i];
       }
    }
    
    printf("Maximum Amount Received=%d\n",Max);
    printf("Second Maximum Amount Received=%d\n",S_Max);
   
   getch();
   return 0;
}