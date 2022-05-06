#include<stdio.h>
#include<conio.h>
#define size 10

int main ()
{
    int i=0,Bill[size]={},Ecnt=0,Ocnt=0,Zcnt=0;
    
    for(i=0;i<size;i++)
    {
       printf("Enter array element no. %d=>\n",(i+1));
       scanf("%d",&Bill[i]);
    
       if((Bill[i]>0) && (Bill[i]%2==0))
       {
          Ecnt++;
        }
        if(Bill[i]%2==1)
        {
            Ocnt++;
        }
        if(Bill[i]==0)
        {
            Zcnt++;
        }
    }
    printf("The count of Even numbers elements in array =%d\n",Ecnt);
    printf("The count of Odd numbers elements in array =%d\n",Ocnt);
    printf("The count of zero's in array =%d\n",Zcnt);

    getch();
    return 0;
}