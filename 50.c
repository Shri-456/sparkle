#include<stdio.h>
void main()
{
int i;
int flat,t;
printf("enter a num");
scanf("%d",&i);
t=i;
flag=0;
while(t!==1)
{
if(t%2!=0)
{
flag=1;
break;
}
else
{
t=t/2;
}
if(flag==0)
{
printf("it is power of two");
}
else
{
printf("it is not power of two");
}
}
