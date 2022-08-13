#include<stdio.h>
#include<conio.h>

int main()
{
    int no=80;
    int *p=&no;
    int **q=&p;
    int ***m=&q;
    int ****x=&m;
    int *****r=&x;

    printf("\nNo = %d",no);
    printf("\np = %d",p);
    printf("\nq = %d",q);
    printf("\nx = %d",x);
    printf("\nr = %d",r);


    printf("\n**********************************************************\n");

    getch();

    printf("\nThe value of no = %d",no);
    printf("\nAddress of no = %d",&no);
    printf("\n%d",*p);
    printf("\n%d",**r);
    printf("\n%d",**(&m));
    printf("\n%d",&(***x));
    printf("\n%d",****r);
    printf("\n%d",***(&r));
    printf("\n%d",**q);
    printf("\n%d",***(&q));

    getch();
    return 0;


}
