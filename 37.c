#include<stdio.h>
void main()
{
int a,b,swap=0;
printf("enter two numbers");
scanf("%d%d",&a,&b);
swap=a;
a=b;
b=swap;
printf("\n the swap number is %d %d",a,b);
}
