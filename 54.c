#include "stdio.h"
void main()
{
  int no;
  printf("enter a num");
  scanf("%d",&no);
  if(no%2==0)
  {
  printf("%d",no-2);
  }
  else
  {
    printf("%d",no-1);
  }
}
