#include<stdio.h>
#include<conio.h>
void main()
{
int h1,h2,m1,m2,hf,mf;
printf("enter  1st hr and min");
scanf("%d%d",&h1,&m1);
printf("enter 2d hr and min");
scanf("%d%d",&h2,&m2);
hf=h1-h2;
mf=m1-m2;
printf("%d%d",hf,mf);
getch();
}
