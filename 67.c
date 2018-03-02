#include "stdio.h"
void main()
{
  int n,d,q,r;
  scanf("%d",&n);
  if(n%10==0)
  {
    printf("%d",n);
  }
    else
    {
     r=n%10;
     q=n/10;
    }
    if(r<=5)
    {
      printf("%d0",q);
    }
    else
    {
      printf("%d0",r);
    }
  }
