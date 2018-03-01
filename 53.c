#include "stdio.h"
void main()
{
  int n,t,q,r,sum=0,i;
  printf("enter a num");
  scanf("%d",&n);
  while(n!=0)
  {
    r=n%10;
    sum=sum+r;
    n=n/10;
  }
  printf("%d",sum);
}
