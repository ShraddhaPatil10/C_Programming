#include<stdio.h>
#include<conio.h>
int main ()
{
    int i=0, values[10]={};
    
    printf("Enter array elements:\n");
    
    for(i=0;i<10;i++)
    {
       printf("\nEnter array elements %d:\n",i+1);
       scanf("%d",& values[i]);
    }
    printf("Press key to move ahead\n");
    getch();
    
  
    printf("Elements in array are=>\n\n");
    for(i=0;i<10;i++)
    {
       printf("Values of 101 element =%d\n",values[i]);
    }
    
    getch();
    return 0;
}
    