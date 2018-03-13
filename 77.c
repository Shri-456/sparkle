#include "stdio.h"
#include<string.h>
void main()
{
  int n,i,m;
  printf("enter a num");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    if(n%i==0)
    {
      printf("%d",i);
    }
  }
}
