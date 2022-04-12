#include<stdio.h>
#include<conio.h>
int main()
{
    int i=0, Amount=0,Min_Bill=0;
   
    for(i=0;i<10;i++)
    {
       printf("Enter Bill Number %d =",i);
       scanf("%d", &Amount);
    
       if((i==1) || (Amount<Min_Bill))
       {
          printf("Min Updated\n");
          Min_Bill=Amount;
       }
    }
      
    printf("Minimum Bill Amount = %d",Min_Bill);
    
    getch();
    return 0;
}