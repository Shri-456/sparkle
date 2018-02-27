#include "stdio.h"
void main()
{
  int x,y,temp;
  printf("enter two numbers");
  scanf("%d%d",&x,&y);
  temp=x;
  x=y;
  y=temp;
  printf("the swap nums are %d %d",x,y);
}
