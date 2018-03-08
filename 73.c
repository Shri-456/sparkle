#include "stdio.h"
#include<string.h>
void main()
{
  int n,i,l,r,f=0;
  printf("enter a num");
  scanf("%d%d%d",&n,&l,&r);
  if((n>l)&&(n<r))
  printf("yes");
  else
  printf("no");
}
