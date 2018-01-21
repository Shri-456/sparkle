#include<stdio.h>
#include<conio.h>
void main()
{
int a[5],i,j,n,temp,c;
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
c=n/2;
for(i=0;i<=n;i++)
{
if(a[i]==a[j])
{
printf("the middle element is",a[i]);  
}
}
}
