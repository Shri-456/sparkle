#include "stdio.h"
void main()
{
  int x,y,temp;
  printf("enter two numbers");
  scanf("%d%d",&x,&y);
  x=x^y;
  y=x^y;
  a=x^y;
  printf("the swapped nums are %d %d",x,y);
}
