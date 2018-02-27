#include<stdio.h>
void main()
{
int a[10],tot=0,i,avg,n;
printf("enter limit");
scanf("%d",&n);
printf("\nthe numbers are");
for(i=0'i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
tot=tot+a[i];
}
avg=tot/n;
printf("\n the avg is %d",avg);
}
