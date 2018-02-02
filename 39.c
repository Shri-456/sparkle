#include<stdio.h>
void main()
{
int i,grt,a[10];
printf("\n enter the numbers");
for(i=0;i<10;i++)
scanf("%d",&a[i]);
grt=a[0];
for(i=0;i<10;i++)
{
  if(a[i]>grt)
  {
    grt=a[i];
  }
}
printf("\n the greatest num is %d",grt);
}
