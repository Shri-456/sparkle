#include "stdio.h"
void main()
{
  int a=0,b=1,c,n,i=2;
  printf("enter a limit");
  scanf("%d",&n);
  printf("the numa are");
  while(i<=n)
  {
  c=a+b;
  a=b;
  b=c;
  i++;
  printf("%d\n",c);
}
}
  
