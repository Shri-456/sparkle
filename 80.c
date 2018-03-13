#include "stdio.h"
void main()
{
  int n,i,r,q;
  printf("enter a num");
  scanf("%d",&n);
  while(n!=0)
  {
    r=n%10;
    if(r%2!=0)
    {
      printf("\n%d",r);
    }
    q=n/10;
    n=q;
  }
}
  
