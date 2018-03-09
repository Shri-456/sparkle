#include "stdio.h"
void main()
{
  int a,n,p;
  printf("enter a num");
  scanf("%d%d",&n,&a);
  p=n*a;
  printf("%d",&p);
  if(a==n)
  {
    printf("it is perfect square");
  }
  else
  {
    printf("no");
  }
  
}
