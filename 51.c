#include "stdio.h"
void main()
{
  int n,t,q,r,sum=0;
  printf("enter a num");
  scanf("%d",&n);
  while(n!=0)
  {
    r=n%10;
    sum=sum*10+r;
    n=n/10;
  }
while(sum!=0)
{
  r=sum%10;
  printf("\t%d",r);
  sum=sum/10;
}
}
