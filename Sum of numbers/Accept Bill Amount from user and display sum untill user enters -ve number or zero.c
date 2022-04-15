#include<stdio.h>
#include<conio.h>
int main()
{
    int cnt=0,Num=0,Sum=0;
     
    printf("Enter Bill Amount for Addition:\n");
    printf("Note=>Enter -ve number or zero to stop input!!!\n");
    
    while(1)
    {
       printf("Enter Bill No %d =",cnt);
       scanf("%d",&Num);
    
       if(Num<=0)
       {
          break;
       }
       Sum=Sum+Num;
       cnt++;
    }
    printf("Addition of given Numbers = %d",Sum);
    
    getch();
    return 0;
}