#include<stdio.h>
#include<conio.h>

struct ABC
{
    char nm[20];
    int a;
    float per;
    double j;
};

int main()
{
    char c;
    int i;
    float f;
    double d;

    struct ABC obj;

    printf("\n %d %d %d %d %d",sizeof(c),sizeof(i),sizeof(f),sizeof(d),sizeof(obj));

    getch();
    return 0;
}
