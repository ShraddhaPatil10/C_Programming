#include<stdio.h>
#include<conio.h>
int main()
{
  int Num=0,cnt=1;
  
  printf("Enter the number to get table:\n");
  scanf("%d",&Num);

  printf("The table is:\n");

  for(cnt=10;cnt>=1;cnt--)
  {
    printf("%d\n",(Num*cnt));
  }
  
  printf("Thanks!!!\n");
  getche();
  return 0;
}
