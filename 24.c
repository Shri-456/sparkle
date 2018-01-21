#include<stdio.h>
#include<conio.h>
void main()
{
int a[5],i,j,n,temp;
printf("enter a limit");
scanf("%d",&n);
printf("/n enter the nums");
for(i=0;i<=n;i++)
{
scanf("%d",&i);
}
for(i=0;i<=n;i++)
{
for(j=i+1;j<=n;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
temp=a[j];
}
}
}
for(i=0;i<=n;i++)
printf("/n the nums are",a[i]);
}
}
