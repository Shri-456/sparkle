#include<stdio.h>
#include<conio.h>
voi main()
{
int i,n,fact=1;
printf("enter anum");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
fact=fact*i;
}
printf("/n the fact is %d",fact);
}
