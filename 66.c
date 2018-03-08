#include "stdio.h"
void main()
{
  int n,i,flag=0;
  printf("enter a num");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    if(n%i==0)
    {
      flag++;
    }
}
if(flag==2)
{

    printf("it is prime");
  }
  else
  {
    printf("not prime");
  }
  
}
