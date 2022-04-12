#include<stdio.h>
#include<conio.h>
int main ()
{
    int i=0,cnt=0, Amount=0,Bill_Sum=0;
    printf("Enter how many bills do you want:\n");
    scanf("%d",&cnt);
    
    for(i=0;i<cnt;i++)
    {
       printf("Enter the numbers:\n");
       scanf("%d",& Amount);
       
       Bill_Sum=Bill_Sum+Amount;
    }
    
    printf("Total Bill amount = %d",Bill_Sum);
    
    getch ();
    return 0;
}
     
