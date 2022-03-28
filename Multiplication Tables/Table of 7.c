#include<stdio.h>
#include<conio.h>
int main()
{
  int Num=7,cnt=1;

  printf("The table is:\n");

  for(cnt=1;cnt<=10;cnt++)
  {
    printf("%d\n",(Num*cnt));
  }
  
  printf("Thanks!!!\n");

  getche();
  return 0;
}
