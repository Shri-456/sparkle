#include "stdio.h"
void main()
{
  int x[20],i,j,n,grt;
  printf("enter limit");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&x[i]);
  }
  for(i=0;i<n;i++)
  {
    for(j=i+1;j<=n;j++)
    {
    if(x[i]<x[j])
    {
      grt=x[i];
    }
  }
  }
  printf("%d",grt);
  
}
  
