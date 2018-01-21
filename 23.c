#include<stdio.h>
#include<conio.h>
void main()
{
int a[50],i,j,temp,limit;
printf("enter limit ");
scanf("%d",&limit);
for(i=0;i<=limit;i++)
{
scanf("%d",&i);
for(i=0;i<=limit;i++)
{
for(j=i+1;j<=limt;j++)
{
if(a[i]>a[j])
{
printf("/n the minimum no is %d",a[j]);
}
}
}
}
}
